class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        unordered_map<string, string> rem;
        for(auto &a: knowledge) {
            rem[a[0]] = a[1]; 
        }
        string temp = "";
        bool isTrue = false;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                isTrue = true;
                continue;
            }
            if(s[i] == ')') {
                isTrue = false;
                ans += ((rem.count(temp)) ? rem[temp]: "?");
                temp = "";
                continue;
            }
            if(isTrue) {
                temp += s[i];
            }else {
                ans += s[i];
            }
        }
        return ans;
    }
};