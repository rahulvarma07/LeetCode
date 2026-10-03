class Solution {
public:
    int longestValidParentheses(string s) {
        int ans = 0, o = 0, c = 0;
        for(auto a: s) {
            if(a == '(') o++;
            else c++;
            if(o == c) {
                ans = max(ans, o+c);
            }else if(c > o) {
                o = 0;
                c = 0;
            }
        }
        o = 0, c = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '(') o++;
            else c++;
            if(o == c) ans = max(ans, o+c);
            else if(o > c) {
                o = 0;
                c = 0;
            }
        }
        return ans;
    }
};