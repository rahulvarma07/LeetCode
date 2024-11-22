class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<vector<int>,int>check;
        int maxx = 1;
        for(int i = 0; i < matrix.size(); i++){
            vector<int>ch = matrix[i];
            check[ch]++;
            for(int j = 0; j < ch.size(); j++){
                ch[j] = (ch[j]==1)?0:1;
            }
            check[ch]++;
            maxx = max(maxx, check[ch]);
        }
        return maxx;
    }
};