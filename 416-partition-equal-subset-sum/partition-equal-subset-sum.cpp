class Solution {
public:
    bool compute(int ind, int sum, int currSum, vector<int>&nums, vector<vector<int>>&dp){
        if(currSum == sum) return true;
        if(ind < 0) return (currSum == sum);
        if(dp[ind][currSum] != -1) return dp[ind][currSum];
        bool didNotPick = compute(ind-1, sum, currSum, nums, dp);
        bool pick = false;
        if(currSum+nums[ind] <= sum){
            pick = compute(ind-1, sum, currSum+nums[ind], nums, dp);
        }
        dp[ind][currSum] = (didNotPick || pick);
        return didNotPick || pick;
    }
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for(auto a:nums) totalSum += a;
        if(totalSum%2 != 0) return false;
        vector<vector<int>>dp(nums.size(), vector<int>((totalSum/2)+1, -1));
        bool ans =  compute(nums.size()-1, totalSum/2, 0, nums, dp);
        return ans;
    }
};