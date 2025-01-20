class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        unordered_map<char, int>check;
        int i = 0, j = 0, ans = 1;
        for(; j < s.size(); j++){
            check[s[j]]++;
            while(check[s[j]] > 1){
                check[s[i]]--;
                i++;
            }
            ans = max(ans, (j-i)+1);
        }
        return ans;
    }
};