class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(j < t.size()){
            if(s[i] == t[j] and i < s.size()){
                i += 1;
            }
            j += 1;
        }
        int ans = s.size() - i;
        if(ans != 0) return false;
        return true;
    }
};