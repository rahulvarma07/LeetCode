class Solution {
public:
    int maxPower(string s) {
        int c = 1, m = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]) c++;
            else c = 1;
            m = max(m, c);
        }
        return m;
    }
};