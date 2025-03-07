class Solution {
public:
    int compute(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&mat){
        if(!(i >= 0 && i < mat.size()) || !(j >= 0 && j < mat[i].size())) return 9999999;
        if(i == mat.size()-1) return mat[i][j];
        if(dp[i][j] != -10000) return dp[i][j];
        int leftCall = compute(i+1, j-1, dp, mat);
        int downCall = compute(i+1, j, dp, mat);
        int rightCall = compute(i+1, j+1, dp, mat);
        dp[i][j] = min({mat[i][j]+leftCall, mat[i][j]+downCall, mat[i][j]+rightCall});
        return dp[i][j];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(), vector<int>(matrix[0].size(), -10000));
        int i = 0, j = 0;
        int finalans = INT_MAX;
        for(; j < matrix[0].size(); j++){
            int ans = compute(i, j, dp, matrix);
            finalans = min(ans, finalans);
        }
        return finalans;
    }
};