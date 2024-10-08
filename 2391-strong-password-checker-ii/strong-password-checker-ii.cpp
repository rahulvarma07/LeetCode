class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        if(p.size() < 8) return false;
        bool lowerCase = false, upperCase = false, digit = false, spec = false;
        for(int i = 0; i < p.size(); i++){
            if(i != 0 && p[i] == p[i-1]) return false;
            if(p[i] >= '0' && p[i] <= '9') digit = true;
            else if(p[i] >= 'a' && p[i] <= 'z') lowerCase = true;
            else if(p[i] >= 'A' && p[i] <= 'Z') upperCase = true;
            else spec = true;
        }
        if(lowerCase && upperCase && spec && digit) return true;
        return false;
    }
};