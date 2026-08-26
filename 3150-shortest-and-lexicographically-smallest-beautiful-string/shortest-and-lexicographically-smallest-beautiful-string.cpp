class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int minn = s.size();
        for(int i = 0; i < s.size(); i++) {
            int cnt = 0;
            string str = "";
            for(int j = i; j < s.size(); j++) {
                if(s[j] == '1') cnt++;
                str += s[j];
                if(cnt == k) {
                    if(j-i+1 < minn) {
                        minn = j-i+1;
                        ans = str;
                    }else if(j-i+1 == minn) {
                        if(ans.size() == 0) ans = str;
                        else ans = min(ans, str);
                    } 
                    break;
                }
            }
        }
        return ans;
    }
};