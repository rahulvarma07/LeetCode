class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        char ch = word[0];
        int cnt = 0;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                cnt++;
            }
            if(cnt > 9){
                ans += '9';
                ans += ch;
                cnt = 1;
            }
            else if(word[i] != ch){
                ans += (cnt+'0');
                ans += ch;
                ch = word[i];
                cnt = 1;
            }
        }
        ans += (cnt+'0');
        ans += ch;
        return ans;
    }
};