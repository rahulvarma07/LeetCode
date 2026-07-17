class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26] = {0};
        for(auto a: s) {
            freq[a-'a']++;
            if(freq[a-'a'] == 2) {
                return a;
            }
        }
        return 'a';
    }
};