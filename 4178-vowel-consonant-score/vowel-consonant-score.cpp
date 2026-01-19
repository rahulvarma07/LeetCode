class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, c = 0;
        for(auto a: s) {
            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
                v++;
            }else if(!(a >= '0'  && a <= '9') && !(a == ' ')) {
                c++;
            }
        }
        if(c > 0) {
            return v/c;
        }else return 0;
    }
};