class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mySet;
        int i = 0, ans = 0, n = s.size();
        for(int j = 0; j < n; j++) {
            while(mySet.find(s[j]) != mySet.end()) {
                mySet.erase(s[i]);
                i++;
            }
            mySet.insert(s[j]);
            ans = max(ans, (j-i)+1);
        }
        return ans;
    }
};