class Solution {
public:
    void compute(int ind, string &s, vector<string>&ans){
        if(ind == s.size()){
            ans.push_back(s);
            return;
        }
        if(s[ind] >= '0' && s[ind] <= '9'){
            compute(ind+1, s, ans);
            return;
        }
        s[ind] = toupper(s[ind]);
        compute(ind+1, s, ans);
        s[ind] = tolower(s[ind]);
        compute(ind+1, s, ans);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        compute(0,s, ans);
        return ans;
    }
};