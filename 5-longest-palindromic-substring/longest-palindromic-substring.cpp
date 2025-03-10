class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 1)
            return s;
        int ans = 0;
        int x = 0, y = 0;
        for (int l = 0; l < s.size(); l++) {
            int i = l - 1, j = l;
            while (i >= 0 && j < n && s[i] == s[j]) {
                i--;
                j++;
            }
            i++;
            j--;
            if (j - i > ans) {
                x = i;
                y = j;
                ans = (j - i);
            }
        }
        for (int l = 1; l < s.size(); l++) {
            int i = l - 1, j = l + 1;
            while (i >= 0 && j < n && s[i] == s[j]) {
                i--;
                j++;
            }
            i++;
            j--;
            if (j - i > ans) {
                x = i;
                y = j;
                ans = (j - i);
            }
        }
        string str = "";
        for (int l = x; l <= y; l++) {
            str += s[l];
        }
        return str;
    }
};