class Solution {
public:
    char shift(char a, long long int s){
        int pos = (a - 'a' + s) % 26;
        if (pos < 0) pos += 26;
        return 'a' + pos;
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        vector<long long int>pref(n, 0);
        pref[n-1] = shifts[n-1];
        for(int i = n-2; i >= 0; i--){
            pref[i] = pref[i+1]+shifts[i];
        }
        string str = "";
        for(int i = 0; i < n; i++){
            str += shift(s[i], pref[i]);
        }
        return str;
    }
};