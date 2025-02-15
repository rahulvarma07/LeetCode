class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = i, y = j;
                int check = matrix[i][j];
                while(x < n && y < m){
                    if(matrix[x][y] != check) return false;
                    x++;
                    y++;
                }
            }
        }
        return true;
    }
};