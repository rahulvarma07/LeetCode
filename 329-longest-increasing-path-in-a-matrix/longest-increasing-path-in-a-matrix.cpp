class Solution {
public:
    int dfs(int n, int m, vector<vector<int>> &mat, vector<vector<int>> &dp, int i, int j, int prevVal) {
        if(i < 0 or i >= n || j < 0 || j >= m) return 0;
        if(mat[i][j] <= prevVal) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int l = 1 + dfs(n, m, mat, dp, i-1, j, mat[i][j]);
        int r = 1 + dfs(n, m, mat, dp, i+1, j, mat[i][j]);
        int t = 1 + dfs(n, m, mat, dp, i, j-1, mat[i][j]);
        int b = 1 + dfs(n, m, mat, dp, i, j+1, mat[i][j]);
        return dp[i][j] = max({l, r, t, b});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int maxx = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dfs(n, m, matrix, dp, i, j, -1);
                maxx = max(maxx, dp[i][j]);
            }
        }
        return maxx;
    }
};