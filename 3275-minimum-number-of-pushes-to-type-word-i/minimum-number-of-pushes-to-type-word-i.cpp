class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0, cnt = 1, r = 0;
        for(auto a: word) {
            ans += cnt;
            r++;
            if(r == 8)  {
                cnt++;
                r = 0;
            }
        }
        return ans;
    }
};