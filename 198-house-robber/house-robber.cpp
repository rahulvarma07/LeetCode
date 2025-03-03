class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int>dp(nums.size()+1, 0);
        dp[0] = nums[0];
        dp[1] = nums[1];
        for(int i = 2; i < nums.size(); i++){
            int x = dp[i-2]+nums[i];
            int y = INT_MIN;
            if(i-3 >= 0) y = dp[i-3]+nums[i];
            dp[i] = max(x, y);
        }
        return max(dp[nums.size()-2], dp[nums.size()-1]);
    }
};