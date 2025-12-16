class Solution {
public:
    
    bool isVowel(char ch) {
        for(auto a: "aeiou") {
            if(a == ch) return true;
        }
        return false;
    }

    string reverseWords(string s) {
       int target = 0, n = s.size(), i = 0;
       while(s[i] != ' ' && i < n) {
            if(isVowel(s[i])) {
                target++;
            }
            i++;
       }

       int cnt = 0, j = i+1, x = i+1;
       for( ; x < n; x++) {
            if(s[x] == ' ') {
                if(cnt == target) {
                    reverse(s.begin()+j, s.begin()+x);
                }
                cnt = 0;
                j = x+1;
            }
            else{
                if(isVowel(s[x])) cnt++;
            }
       }
       if(cnt == target) {
        reverse(s.begin()+j, s.end());
       }
       return s;
    }
};