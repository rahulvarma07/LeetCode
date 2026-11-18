class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int ind = s.size()-1;
        while(ind >= 0 && s[ind] == ' ') ind--;
        while(ind >= 0 && s[ind] != ' ') {
            ind--;
            ans++;
        }
        return ans;
        // "Hello World" 
    }
};