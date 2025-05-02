class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int i = 0, j = 0, ans = 0;
        unordered_map<int, int>mp;
        for(; j < word.size(); j++){
            if(word[j] == 'a'){
                mp['a']++;
                if(mp.size() != 1){
                    mp.clear();
                    mp['a']++;
                    i = j;
                }
            }
            else if(word[j] == 'e'){
                mp['e']++;
                if(mp.size() != 2){
                    mp.clear();
                    i = j+1;
                }
            }
            else if(word[j] == 'i'){
                mp['i']++;
                if(mp.size() != 3){
                    mp.clear();
                    i = j+1;
                }
            }
            else if(word[j] == 'o'){
                mp['o']++;
                if(mp.size() != 4){
                    mp.clear();
                    i = j+1;
                }
            }
            else if(word[j] == 'u'){
                mp['u']++;
                if(mp.size() != 5){
                    mp.clear();
                    i = j+1;
                }
            }
            if(mp.size() == 5){
                ans = max(ans, (j-i)+1);
            }
        }
        return ans;
    }
};