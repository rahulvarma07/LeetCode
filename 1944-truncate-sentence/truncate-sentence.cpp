class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int sc = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') sc++;
            if(sc == k) return ans;
            ans += s[i];
        }
        return ans;
    }
};