class Solution {
public:
    int getLucky(string s, int k) {
        int ans = 0;
        string str = "";
        for(int i = 0; i < s.size(); i++){
            str += to_string(s[i] - 'a' + 1);
        }
        while(k--){
            ans = 0;
            for(int i = 0; i < str.size(); i++){
                ans += (str[i] - '0');
            }
            str = to_string(ans);
        }
        return ans;
    }
};