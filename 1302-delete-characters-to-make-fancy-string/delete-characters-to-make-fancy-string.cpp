class Solution {
public:
    string makeFancyString(string s) {
       if(s.size() == 1) return s;
       string ans = "";
       ans += s[0];
       ans += s[1];
       for(int i = 2; i < s.size(); i++){
        int n = ans.size();
        if(s[i] != ans[n-1] || s[i] != ans[n-2]){
            ans += s[i];
        }
       }
       return ans;
    }
};