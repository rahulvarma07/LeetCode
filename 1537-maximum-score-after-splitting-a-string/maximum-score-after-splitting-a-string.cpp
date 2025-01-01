class Solution {
public:
    int maxScore(string s) {
        int ans = 0;
        for(int i = 1; i < s.size(); i++){
            int cnt1 = 0, cnt0 = 0;
            for(int x = i; x < s.size(); x++){
                if(s[x] == '1') cnt1++;
            }
            for(int y = i-1; y >= 0; y--){
                if(s[y] == '0') cnt0++;
            }
            ans = max(ans, (cnt0+cnt1));
        }
        return ans;
    }
};