class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 1; i < s.size(); i++) {
            int d1 = s[i]-'0';
            int d2 = s[i-1]-'0';
            if(abs(d2 - d1) > 2) return false;
        }
        return true;
    }
};