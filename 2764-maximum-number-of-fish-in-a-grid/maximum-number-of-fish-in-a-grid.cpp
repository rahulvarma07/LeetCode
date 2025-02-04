class Solution {
public:
    int maxx = 0;
    int findMaxPath(vector<vector<int>>& grid, int x, int y, vector<vector<bool>>& vis, int sum) {
        if (!(x >= 0 && x < grid.size()) || !(y >= 0 && y < grid[x].size()))
            return sum;
        if (grid[x][y] == 0)
            return sum;
        int s = grid[x][y];
        grid[x][y] = 0;
        int left = findMaxPath(grid, x, y+1, vis, sum);
        int right = findMaxPath(grid, x, y-1, vis, sum);
        int top = findMaxPath(grid, x+1, y, vis, sum);
        int bottom = findMaxPath(grid, x-1, y, vis, sum);
        return top+bottom+right+left+s;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size()));
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] > 0) {
                    int ans = findMaxPath(grid, i, j, vis, 0);
                    maxx = max(maxx, ans);
                }
            }
        }
        return maxx;
    }
};