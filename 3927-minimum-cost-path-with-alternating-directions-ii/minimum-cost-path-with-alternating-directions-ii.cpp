#define ll long long int
class Solution {
public:
    ll maxx = 1e18;
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        if(n == 0 && m == 0) return 0;
        vector<vector<ll>>dp(m, vector<ll>(n, 0));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                dp[i][j] = (i+1)*(j+1);
                if(i == 0 && j == 0) continue;
                dp[i][j] += waitCost[i][j];
            }
        }
        ll ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0) continue;
                ll sum1 = (j-1 < 0 ? maxx : dp[i][j-1]);
                ll sum2 = (i-1 < 0 ? maxx : dp[i-1][j]);
                dp[i][j] = dp[i][j] + min(sum1, sum2);
            }
        }
        ans =  (0ll + dp[m-1][n-1]) - (waitCost[m-1][n-1]);
        return ans;
    }
};