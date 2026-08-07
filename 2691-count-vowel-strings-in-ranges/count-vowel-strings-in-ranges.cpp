class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // w = ["aba", "bcb", "ece", "aa", "e"]
        int n = words.size(), q = queries.size(), c = 0;
        vector<int> pref(n, 0);
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            int m = words[i].size();
            if(isVowel(words[i][0]) && isVowel(words[i][m-1])) c++;
            pref[i] = c;
        }
        for(int i = 0; i < q; i++) {
            int l = queries[i][0], r = queries[i][1];
            if(l == 0) {
                ans.push_back(pref[r]);
            }else {
                ans.push_back(pref[r]-pref[l-1]);
            }
        }
        return ans;
    }
};