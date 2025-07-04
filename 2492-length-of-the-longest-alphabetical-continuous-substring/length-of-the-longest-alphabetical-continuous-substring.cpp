class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxx = 1;
        int cnt = 1;
        for(int i = 1; i < s.size(); i++){
            char ch = s[i]-1;
            if(ch == s[i-1]) cnt++;
            else{
                maxx = max(maxx, cnt);
                cnt = 1;
            }
        }
        maxx = max(maxx, cnt);
        return maxx;
    }
};