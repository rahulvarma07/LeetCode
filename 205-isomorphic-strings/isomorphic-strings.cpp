class Solution {
public:
    bool check(string s, string t){
        unordered_map<char,char>mp;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) == mp.end()) mp[s[i]] = t[i];
            else{
                if(mp[s[i]] == t[i]) continue;
                else return false;
            }
        }
        return true;
    }

    bool isIsomorphic(string s, string t) {
        return (check(s, t) && check(t, s));
    }
};