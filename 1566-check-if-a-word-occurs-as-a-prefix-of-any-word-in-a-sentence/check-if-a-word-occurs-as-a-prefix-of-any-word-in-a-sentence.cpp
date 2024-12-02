class Solution {
public:
    int isPrefixOfWord(string sentence, string s) {
        int ans = 0;
        string str = "";
        for(int i = 0; i < sentence.size(); i++){
            if(str == s){
                return ans+1;
            }
            if(sentence[i] == ' '){
                str = "";
                ans++;
            }
            else str += sentence[i];
        }
        if(str == s) return ans+1;
        return -1;
    }
};