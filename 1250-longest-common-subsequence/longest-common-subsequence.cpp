class Solution {
public:
    int lcs(string &text1, string &text2, vector<vector<int>> &dp, int i, int j) {
        if(i < 0 || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]) {
            return dp[i][j] = 1 + lcs(text1, text2, dp, i-1, j-1);
        }else {
            return dp[i][j] = max(lcs(text1, text2, dp, i, j-1), lcs(text1, text2, dp, i-1, j));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int i = n-1, j = m-1;
        return lcs(text1, text2, dp, i, j);
    }
};