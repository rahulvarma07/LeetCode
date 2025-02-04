class Solution {
public:
    void landPoints(vector<vector<char>>&grid, int x, int y, vector<vector<int>>&points){
        if(!(x >= 0 && x < grid.size()) || !(y >= 0 && y < grid[x].size())) return;
        if(grid[x][y] == '0') return;
        if(grid[x][y] == '1'){
            points.push_back({x, y});
        }
        grid[x][y] = '0';
        landPoints(grid, x, y+1, points);
        landPoints(grid, x, y-1, points);
        landPoints(grid, x+1, y, points);
        landPoints(grid, x-1, y, points);
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>points;
        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                int count = 0;
                if(grid[i][j] == '1'){
                    landPoints(grid, i, j, points);
                    ans++;
                }
            }
        }
        return ans;
    }
};