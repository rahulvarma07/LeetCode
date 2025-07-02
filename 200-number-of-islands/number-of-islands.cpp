class Solution {
public:
    void landPoints(vector<vector<char>>&grid, int x, int y){
        if(!(x >= 0 && x < grid.size()) || !(y >= 0 && y < grid[x].size())) return;
        if(grid[x][y] == '0') return;
        grid[x][y] = '0';
        landPoints(grid, x, y+1);
        landPoints(grid, x, y-1);
        landPoints(grid, x+1, y);
        landPoints(grid, x-1, y);
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    landPoints(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};