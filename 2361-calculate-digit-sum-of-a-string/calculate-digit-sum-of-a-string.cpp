class Solution {
public:
    string digitSum(string str) {
        int ans = 0;
        for(int i = str.size()-1; i >= 0; i--) ans = ans + (str[i] - '0');
        return to_string(ans);
    }
    string digitSum(string s, int k) {
        while(s.size() > k) {
            string grpK = "";
            string res = "";
            int i = 0;
            while(i < s.size()) {
                grpK += s[i];
                if((i + 1) % k == 0 || i == s.size()-1) {
                    res += digitSum(grpK);
                    grpK = "";
                }
                i++;
            }
            s = res;
        }
        return s;
    }
};