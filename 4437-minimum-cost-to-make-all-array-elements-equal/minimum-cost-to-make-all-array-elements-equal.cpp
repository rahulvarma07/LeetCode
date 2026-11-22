#define ll long long int
class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n = nums.size();
        ll ans = 1e16;
        vector<ll> pref(n, 0), suff(n, 0);
        for(int i = 0; i < nums.size(); i++) {
            pref[i] = 1LL * nums[i] * i;
            suff[i] = 1LL * nums[i] * (n - i - 1);
        } 
        vector<int> prefCntInd(n, -1), suffCntInd(n, -1);
        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i-1]) {
                if(prefCntInd[i-1] == -1) prefCntInd[i] = i-1;
                else prefCntInd[i] = prefCntInd[i-1];
            }
        }
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] == nums[i+1]) {
                if(suffCntInd[i+1] == -1) suffCntInd[i] = i+1;
                else suffCntInd[i] = suffCntInd[i+1];
            }
        }
        for(int i = 1; i < n-1; i++) {
            ll left = (prefCntInd[i] != -1 ? pref[prefCntInd[i]] : pref[i]);
            ll right = (suffCntInd[i] != -1 ?suff[suffCntInd[i]] : suff[i]);
            ll sum = 1LL * left + right;
            ans = min(ans, sum);
        }
        return ans;
    }
};
/*
     3  3  3   6  3   3
    -1  0  0  -1  -1  4 
     2  2 -1  -1   5 -1
     0  3  6  18  12  15
     15 12 9  12  3   0 

     // if(-1) that that ind else pref[prefCnt[Ind]]
*/