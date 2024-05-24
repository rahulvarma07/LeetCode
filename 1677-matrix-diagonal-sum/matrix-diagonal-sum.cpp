class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i = 0;
        int j = 0;
        int sum = 0;
        while(i < mat.size() and j < mat[0].size())
        {
            sum += mat[i][j];
            mat[i][j] = 0;
            i += 1;
            j += 1;
        }
        i = 0;
        j = mat[0].size() - 1;
        while(i < mat.size() and j >= 0)
        {
            sum += mat[i][j];
            j -= 1;
            i += 1;
        }
        return sum;
    }
};