class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans = 0;
        vector<vector<bool>>checks(grid.size(), vector<bool>(grid[0].size()));
        for(int j = 0; j < grid[0].size(); j++){
            int cnt1 = 0, p1 = -1, p2 = -1, maxx = 1;
            for(int i = 0; i < grid.size(); i++){
                cnt1 += grid[i][j];
                if(cnt1 > maxx){
                    checks[i][j] = true;
                    checks[p1][p2] = true;
                    maxx = cnt1;
                }
                if(grid[i][j] == 1){
                    p1 = i, p2 = j;
                }
            }
            if(cnt1 > 1) ans += cnt1;
        }

        for(auto a: checks){
            for(auto b:a) cout << b << " ";
            cout << endl;
        }

        for(int i = 0; i < grid.size(); i++){
            int cnt1 = 0, isTrue = false;
            for(int j = 0; j < grid[0].size(); j++){
                if(!(checks[i][j])) cnt1 += grid[i][j];
                else isTrue = true;
            }
            if(isTrue || cnt1 > 1) ans += cnt1;
        }
        return ans;
    }
};