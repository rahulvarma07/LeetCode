class Solution {
public:
    string reverseWords(string s) {
        string s1 = "";
        string ans = "";
        int n = s.size();
        for(int i = n-1; i >= 0; i--){
            if(s[i] != ' '){
                s1 += s[i];
            }
            else if(s[i] == ' ' && s1.size() != 0){
                reverse(s1.begin(), s1.end());
                ans += s1;
                ans += ' ';
                s1 = "";
            }
        }
        if(s1.size() == 0) ans.pop_back();
        else{
            reverse(s1.begin(), s1.end());
            ans += s1;
        }
        return ans;
    }
};