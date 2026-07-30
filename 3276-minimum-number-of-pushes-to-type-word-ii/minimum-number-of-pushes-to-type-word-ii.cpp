class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for(auto a: word) freq[a-'a']++;
        sort(freq.begin(), freq.end(), greater<int>());
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if(i < 8) ans = ans + freq[i];
            else if(i < 16) ans = ans + freq[i] * 2;
            else if(i < 24) ans = ans + freq[i] * 3;
            else ans = ans + freq[i] * 4;
        }
        return ans;
    }
};