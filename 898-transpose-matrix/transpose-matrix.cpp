class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size(), m  = matrix[0].size();
        vector<vector<int>> transpose(m, vector<int>(n, 0));
        for(int j = 0; j < m; j++) {
            for(int i = 0; i < n; i++) {
                transpose[j][i] = matrix[i][j]; // 0 1  0 2 0 3
            }
        }
        return transpose;
    }
};