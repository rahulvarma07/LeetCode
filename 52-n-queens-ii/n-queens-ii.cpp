class Solution {
public:
    int finalRes = 0;
    void compute(int ind, vector<string>&ans, int n){
        if(ind == n){
            finalRes++;
            return;
        }
        for(int i = 0; i < n; i++){
            int flag = 0;
            // Checking Top
            for(int j = ind-1; j >= 0; j--){
                if(ans[j][i] == 'Q'){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) continue;
            
            // Checking UpperLeft
            int y = i, dummy = i;
            for(int j = ind-1; j >= 0; j--){
                y--;
                if(y == -1) break;
                if(ans[j][y] == 'Q'){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) continue;

            // Checking UpperRight
            y = dummy;
            for(int j = ind-1; j >= 0; j--){
                y++;
                if(y == n) break;
                if(ans[j][y] == 'Q'){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) continue;
            ans[ind][i] = 'Q';
            compute(ind+1, ans, n);
            ans[ind][i] = '.';
        }
    }
    int totalNQueens(int n) {
        string str = "";
        for(int i = 0; i < n; i++){
            str += '.';
        }
        vector<string>generate(n, str);
        int ind = 0;
        compute(ind, generate, n);
        return finalRes;
    }
};