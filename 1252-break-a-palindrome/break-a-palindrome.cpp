class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        if(n == 1) return "";
        int i = 0, j = n-1;
        while(i < j){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
            i++;
            j--;
        }
        for(auto a: "abcdefghijklmopqrstuvwxy") {
            if(palindrome[n-1] != a) {
                palindrome[n-1] = a;
                return palindrome;
            }
        }
        return "";
    }
};