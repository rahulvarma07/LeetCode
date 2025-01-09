class Solution {
public:
    bool isPref(string pref, string str2){
        if(str2.size() < pref.size()) return false;
        int n = pref.size();
        for(int i = 0; i < n; i++){
            if(pref[i] != str2[i]) return false;
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            if(isPref(pref, words[i])) ans++;
        }
        return ans;
    }
};