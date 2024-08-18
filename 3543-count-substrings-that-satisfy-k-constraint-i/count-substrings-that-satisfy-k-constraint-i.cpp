class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            int cnt0 = 0, cnt1 = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == '0') cnt0 ++;
                if(s[j] == '1') cnt1 ++;
                if(cnt0 <= k || cnt1 <= k) ans ++;
            }
        }
        return ans;
    }
};