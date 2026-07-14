class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount = 0;
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == toupper(word[i])) capCount++;
        }
        return (capCount == word.size() || capCount == 0 || (capCount == 1 && word[0] == toupper(word[0])));
    }
};