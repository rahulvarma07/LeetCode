class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.size()-1;
        while(i >= 0 && num[i] == '0') i--;
        string ans = "";
        for(int x = 0; x <= i; x++) {
            ans += num[x];
        }
        return ans;
    }
};