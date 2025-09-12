class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }

    bool doesAliceWin(string s) {
        int oddCnt = 0, evenCnt = 0;
        for(int i = 0; i < s.size(); i++){
            int j = i;
            if(isVowel(s[i])){
                for(; j < s.size(); j++){
                    if(!isVowel(s[j])) break;
                }
                int val = (j - i);
                if(val % 2 == 0) evenCnt++;
                else oddCnt++;
            }
            i = j;
        }
        if(oddCnt == 0 && evenCnt == 0) return false;
        return true;
    }
};