class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int>check1;
        map<char, int>check2;
        for(auto a:s){
            check1[a]++;
        }
        for(auto a:check1){
            if(a.second % 2 != 0){
                check2[a.first] = 1;
                check1[a.first] = a.second-1;
            }
        }
        int i = 0, j = s.size()-1;

        for(auto a:check1){
            while(a.second != 0 && i <= j){
                s[i] = a.first;
                s[j] = a.first;
                i++;
                j--;
                a.second-=2;
            }
        }
        for(auto a:check2){
            while(a.second != 0 && i <= j){
                s[i] = a.first;
                a.second -= 1;
                i++;
                if(a.second == 0) break;
                s[j] = a.first;
                a.second -= 1;
                j--;
            }
        }
        return s;
    }
};