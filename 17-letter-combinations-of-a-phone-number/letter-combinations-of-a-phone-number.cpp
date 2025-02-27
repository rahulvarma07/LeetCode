class Solution {
public: 
    vector<string>check = {"abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string>ans;
    void compute(string &digits, int ind, string gen){
        if(ind == digits.size()){
            ans.push_back(gen);
            return;
        }
        int x = (digits[ind]-'0')-2;
        for(auto a:check[x]){
            gen += a;
            compute(digits, ind+1, gen);
            gen.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        string gen = "";
        compute(digits, 0, gen);
        return ans;
    }
};