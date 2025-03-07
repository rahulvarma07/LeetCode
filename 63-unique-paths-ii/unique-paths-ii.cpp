class Solution {
public:
int compute(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis){
    if(!(i >= 0 && i < grid.size()) || !(j >= 0 && j < grid[i].size())) return 0;
    if(i == grid.size()-1 && j == grid[i].size()-1 && grid[i][j] == 1) return 0;
    if(i == grid.size()-1 && j == grid[i].size()-1) return 1;
    if(grid[i][j] == 1){
        vis[i][j] = 0;
        return 0;
    }
    if(vis[i][j] != -1) return vis[i][j];
    int left = compute(i, j+1, grid, vis);
    int right = compute(i+1, j, grid, vis);
    vis[i][j] = (left+right);
    return (left+right);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>vis(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        int i = 0, j = 0;
        int ans = compute(i, j, obstacleGrid, vis);
        return ans;
    }
};