class NumMatrix {
public:
    vector<vector<int>> mat;
    vector<vector<int>> pref;
    int n, m;
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;
        n = mat.size(), m = mat[0].size();
        pref.resize(n+1, vector<int>(m+1, 0));

        // building prefix matrix
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                pref[i][j] = mat[i-1][j-1] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int standingSum = pref[r2+1][c2+1];
        int topSum = pref[r1][c2+1];
        int leftSum = pref[r2+1][c1];
        int adjSum = pref[r1][c1];
        return (standingSum + adjSum - topSum - leftSum);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */