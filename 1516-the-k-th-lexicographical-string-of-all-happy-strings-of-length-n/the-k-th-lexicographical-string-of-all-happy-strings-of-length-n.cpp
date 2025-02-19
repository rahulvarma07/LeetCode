class Solution {
public:
    int cnt = 0;
    string res = "";
    void compute(int ind, string ans, int n, int k, string &check){
        if(ind == n){
            cnt++;
            if(cnt == k){
                res = ans;
            }
            return;
        }
        if(res.size() > 0) return;
        for(int i = 0; i < check.size(); i++){
            if(ind == 0 || check[i] != ans[ind-1]){
                ans += check[i];
                compute(ind+1, ans, n, k, check);
                ans.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
       string ans = "";
       string check = "abc";
       int ind = 0;
       compute(ind , ans, n, k, check);
       return res;
    }
};