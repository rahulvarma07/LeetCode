class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long int>suff(nums.size(), 0);
        int n = nums.size();
        suff[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            suff[i] = (nums[i] + suff[i+1]);
        }
        int ans = 0;
        long long int ps = 0;
        for(int i = 0; i < nums.size()-1; i++){
            ps += nums[i];
            if(ps >= suff[i+1]) ans++;
        }
        return ans;
    }
};