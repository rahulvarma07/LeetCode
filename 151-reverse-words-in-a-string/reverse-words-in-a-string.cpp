class Solution {
public:
    string reverseWords(string str) {
        reverse(str.begin(), str.end());
        string finalAns = "";
        string ans = "";
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ' ' && ans.size() == 0) continue;
            if(str[i] != ' '){
                ans += str[i];
            }
            else{
                reverse(ans.begin(), ans.end());
                finalAns += ans;
                finalAns += ' ';
                ans = "";
            }
        }
        reverse(ans.begin(), ans.end());
        finalAns += ans;
        if(finalAns.back() == ' ') finalAns.pop_back();
        return finalAns;
    }
};