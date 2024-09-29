class Solution {
public:
    char kthCharacter(int k) {
        string word = "ab";
        int i = 1;
        char add = 'a';
        while(word.size() <= k){
            if(word[i] == 'z') add = 'a';
            else add = word[i]+1;
            word += word[i];
            word += (char)(add);
            i += 1;
        }
        return word[k-1];
    }
};