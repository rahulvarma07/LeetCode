class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> t1(26, 0);
        vector<int> t2(26, 0);
        for(int i = 0; i < s.size(); i++) {
            t1[s[i]-'a']++;
            t2[t[i]-'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(t1[i] != t2[i]) return false;
        }
        return true;
    }
};