class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans(code.size(), 0);
        if(k == 0) return ans;
        if(k > 0){
            for(int i = 0; i < code.size(); i++){
                int sum = 0;
                for(int j = i+1; j <= i+k; j++){
                    int x = j % code.size();
                    sum += code[x];
                }
                ans[i] = sum;
            }
        }
        if(k < 0){
            for(int i = 0; i < code.size(); i++){
                int sum = 0;
                for(int j = i-1; j >= i+k; j--){
                    int x = (j < 0)? j+code.size(): j;
                    sum += code[x];
                }
                ans[i] = sum;
            }
        }
        return ans;
    }
};