class Solution {
public:
    string clearDigits(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans += s[i];
            }
            else{
                if(ans.size() > 0) ans.pop_back();
            }
        }
        return ans;
    }
};