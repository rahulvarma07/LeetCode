class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0; 
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n && j <= i+2; j++) {
                int l = (j - (i - 1));
                l = l * l;
                dp[j] = min(dp[j],  dp[i-1] + costs[j-1] + l);
            }
        }
        return dp[n];
    }
};