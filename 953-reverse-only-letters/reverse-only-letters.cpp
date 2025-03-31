class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans = "";
        string str = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                str += s[i];
            }
        }
        cout << str;
        reverse(str.begin(), str.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                ans += str[j];
                j++;
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};