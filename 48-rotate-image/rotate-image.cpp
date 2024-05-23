class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(), vector<int>(matrix.size()));
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix.size(); j++)
            {
                ans[j][(matrix.size() - 1)- i] = matrix[i][j];
            }
        }
        matrix = ans;
    }
};