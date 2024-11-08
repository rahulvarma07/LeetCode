class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int>check;
        int l = 0, r = 0, ans = 0;
        while(r < s.size() && l <= r){
            check[s[r]]++;
            while(check[s[r]] >= 2 && l <= r){
                check[s[l]]--;
                if(check[s[l]] <= 0)check.erase(s[l]);
                l++;
            }
            ans = max(ans, (r-l)+1);
            r++;
        }
        return ans;
    }
};