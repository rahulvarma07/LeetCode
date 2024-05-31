class Solution {
public:
    bool squareIsWhite(string s) {
        int n = 0;
        n += ((int)(s[0] - 'a')) + 1;
        n += s[1] - '0';
        if(n % 2 == 0) return false;
        return true;
    }
};