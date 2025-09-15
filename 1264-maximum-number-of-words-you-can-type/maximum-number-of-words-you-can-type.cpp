class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> myMap;
        for(char a : brokenLetters){
            myMap[a]++;
        }
        int ans = 0;
        bool isTrue = true;
        for(int i = 0; i < text.size(); i++){
            if(text[i] == ' '){
                if(isTrue) ans++;
                isTrue = true;
            }
            else{
                if(myMap.find(text[i]) != myMap.end()) isTrue = false;
            }
        }
        if(isTrue) ans++;
        return ans;
    }
};