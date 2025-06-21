# define ll long long int
int MOD = 1e9+7;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>leftMap;
        unordered_map<int, int>rightMap;
        leftMap[nums[0]]++;
        for(int i = 1; i < nums.size(); i++){
            rightMap[nums[i]]++;
        }

        ll ans = 0;
        for(int i = 1; i < nums.size()-1; i++){
            ll x = nums[i]*2;
            if( x > 1e6 ) continue;
            int leftCount = leftMap[x];
            int rightCount = rightMap[x];
            ll toAdd = (1ll * (leftCount % MOD) * (x == 0 ? rightCount - 1 : rightCount)) % MOD;
            ans = (ans + toAdd) % MOD;
            leftMap[nums[i]]++;
            rightMap[nums[i]]--;
        }
        return ans;
    }
};