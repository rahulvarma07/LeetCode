class Solution {
public:
    void compute(int ind, string str, string &s, vector<string>&ans){
        if(ind == s.size()){
            ans.push_back(s);
            return;
        }
        if(s[ind] >= '0' && s[ind] <= '9'){
            compute(ind+1, str, s, ans);
            return;
        }
        s[ind] = toupper(s[ind]);
        compute(ind+1, str, s, ans);
        s[ind] = tolower(s[ind]);
        compute(ind+1, str, s, ans);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string str = "";
        compute(0, str, s, ans);
        return ans;
    }
};