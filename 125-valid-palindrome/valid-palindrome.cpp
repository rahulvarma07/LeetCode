class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                r += s[i];
            }else if(s[i] >= 'A' && s[i] <= 'Z') {
                r += ('a' + (s[i] - 'A'));
            }else if(s[i] >= '0' && s[i] <= '9'){
                r += s[i];
            }
        }
        // r = "amanaplanacanalpanama"
        int i = 0, j = r.size()-1;
        while(i < j) {
            if(r[i] == r[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};