class Solution {
public:
    bool isVowel(char ch) {
        for(auto a: "AEIOUaeiou") {
            if(a == ch) return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0, j = s.size()-1;
        int n = s.size();
        while(i <= j) {
            while(i < n && !isVowel(s[i])) i++;
            while(j >= 0 && !isVowel(s[j])) j--;
            if(i < n && j >= 0 && i <= j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};