class Solution {
public:
    string countAndSay(int n) {
       if(n == 1) return "1";
       string str = countAndSay(n-1);
       string ans = "";
        int cnt = 1;
        char ch = str[0];
        for(int i = 1; i < str.size(); i++){
            if(ch == str[i]){
                cnt++;
            }
            else{
                string pref = "";
                while(cnt != 0){
                    pref += to_string(cnt%10);
                    cnt /= 10;
                }
                reverse(pref.begin(), pref.end());
                ans += pref;
                ans += ch;
                cnt = 1;
                ch = str[i];
            }
        }
        string pref = "";
        while(cnt != 0){
            pref += to_string(cnt%10);
            cnt /= 10;
        }
        reverse(pref.begin(), pref.end());
        ans += pref;
        ans += ch;
        return ans;
    }
};