class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                long long int x = (long long int)nums[i] * nums[j];
                long long int y = (long long int)gcd(nums[i] , nums[j]) * gcd(nums[i], nums[j]);
                long long int d = x/y;
                ans = max(ans, d);
            }
        }
        return ans;
    }
};