class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = INT_MAX;
        for(auto a:strs) minLen = min(minLen,(int)a.size());
        string ans = "";
        for(int i = 0; i < minLen; i++){
            char ch = strs[0][i];
            bool isTrue = true;
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != ch) isTrue = false;
            }
            if(isTrue) ans += strs[0][i];
            else break;
        }
        return ans;
    }
};