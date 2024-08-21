class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp = cost;
        for(int i = 2; i < cost.size(); i++){
            dp[i] = min((dp[i] + dp[i-1]), (dp[i] + dp[i-2]));
        }
        return min(dp[dp.size()-2], dp[dp.size()-1]);
    }
};