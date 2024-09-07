class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 1) return true;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                str += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                str += tolower(s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                str += s[i];
            }
        }
        int i = 0, j = str.size()-1;
        cout << str;
        while(i < j){
            if(str[i] != str[j]) return false;
            i += 1;
            j -= 1;
        }
        return true;
    }
};