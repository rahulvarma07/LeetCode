class Solution {
public:
    int compute(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&dp){
        if(!(i >= 0 && i < grid.size()) || !(j >= 0 && j < grid[i].size())) return 99999;
        if(i == grid.size()-1 && j == grid[i].size()-1) return grid[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        int left = compute(i, j+1, grid, dp);
        int right = compute(i+1, j, grid, dp);
        dp[i][j] = min(grid[i][j]+left, grid[i][j]+right);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(), vector<int>(grid[0].size(), -1));
        int i = 0, j = 0;
        int ans = compute(i, j, grid, dp);
        return ans;
    }
};