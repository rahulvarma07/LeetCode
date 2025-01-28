class Solution {
public:
    void computeCombinations(int i, string &str, vector<string>&mp, vector<string>&ans, string &digits){
        if(i == digits.size()) ans.push_back(str);
        else{
            for(auto a: mp[digits[i]-'2']){
            str += a;
            computeCombinations(i+1, str, mp, ans, digits);
            str.pop_back();
            }
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string>mp = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string>ans;
        string str = "";
        computeCombinations(0, str, mp, ans, digits);
        return ans;
    }
};