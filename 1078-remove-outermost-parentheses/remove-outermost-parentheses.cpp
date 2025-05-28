class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        bool isTrue = false;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') cnt++;
            else cnt--;
            if(cnt == 1 && !isTrue){
                isTrue = true;
                continue;
            }
            else if(cnt == 0 && isTrue){
                isTrue = false;
                continue;
            }
            if(isTrue) ans += s[i];
        }
        return ans;
    }
};