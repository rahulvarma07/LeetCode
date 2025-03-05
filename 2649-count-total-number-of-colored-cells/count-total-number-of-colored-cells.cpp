class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1) return 1;
        vector<long long int>dp(n, 0);
        dp[0] = 1;
        dp[1] = 5;
        int x = 2;
        for(int i = 2; i < n; i++){
            dp[i] = dp[i-1]+(long long)(4*x);
            x++;
        }
        return dp[n-1];
    }
};