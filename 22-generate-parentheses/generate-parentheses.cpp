class Solution {
public:
    void gen(string str, vector<string> &ans, string &check, int c, int &n) {
        if(str.size() == n) {
            if(c == 0) ans.push_back(str);
            return;
        }
        if(c < 0) return;
        gen(str+'(', ans, check, c+1, n);
        gen(str+')', ans, check, c-1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "", check = "()";
        n = n*2;
        gen(str, ans, check, 0, n);
        return ans;
    }
};