class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>col;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        //
        for(auto r:row){
            for(int j = 0; j < matrix[0].size(); j++){
                matrix[r][j] = 0;
            }
        }

        for(auto c:col){
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][c] = 0;
            }
        }
    }
};