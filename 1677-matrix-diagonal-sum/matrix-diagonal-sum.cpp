class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size();
        for(int i = 0; i < n; i++) {
            int x = i, y = n-i-1;
            sum += mat[i][x];
            if(x != y) sum += mat[i][y];
        }
        return sum;
    }
};