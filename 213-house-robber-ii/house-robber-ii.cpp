class Solution {
public:
    int houseRob(vector<int>&nums, int strt, int end){
        int n = nums.size();
        vector<int>dp(n, 0);
        dp[strt-1] = nums[strt-1];
        dp[strt-2] = nums[strt-2];
        for(int i = strt; i <= end; i++){
            int x = dp[i-2]+nums[i];
            int y = INT_MIN;
            if(i-3 >= 0) y = dp[i-3]+nums[i];
            dp[i] = max(x, y);
        }
        return max(dp[end], dp[end-1]);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        int n = nums.size();
        int x = houseRob(nums, 2, n-2);
        int y = houseRob(nums, 3, n-1);
        return max(x, y);
    }
};