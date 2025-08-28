class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int x = 0, y = 0;
        vector<int> ans;
        int cnt = n*m;
        while(cnt--){
            while(x >= 0 && x < n && y >= 0 && y < m){
                ans.push_back(mat[x][y]);
                x--;
                y++;
            }
            x++;
            if(y == m){
                x++;
                y--;
            }
            while(x >= 0 && x < n && y >= 0 && y < m){
                ans.push_back(mat[x][y]);
                x++;
                y--;
            }
            y++;
            if(x == n){
                x--;
                y++;
            }
        }
        return ans;
    }
};


