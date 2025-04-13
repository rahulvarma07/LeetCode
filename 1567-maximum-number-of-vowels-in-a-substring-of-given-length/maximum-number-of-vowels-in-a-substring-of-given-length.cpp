class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int ans = 0, cnt = 0, i = 0, j = 0;
        for(; j < k; j++){
            if(isVowel(s[j])) cnt++;
        } 
        j--;
        while(j < s.size()){
            ans = max(ans, cnt);
            if(isVowel(s[i])) cnt--;
            i++;
            j++;
            if(j < s.size()){
                if(isVowel(s[j])) cnt++;
            }
        }
        return ans;
    }
};