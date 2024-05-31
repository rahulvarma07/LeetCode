class Solution {
public:
    int isvowel(char ch)
    {
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return 1;
        return 0;
    }
    bool halvesAreAlike(string s) 
    {
        int cnt1 = 0;
        int cnt2 = 0;
        int n = s.size() / 2;
        for(int i = 0; i < n; i++)
        {
           cnt1 += isvowel(tolower(s[i]));
        }
        for(int i = n; i < s.size(); i++)
        {
            cnt2 +=  isvowel(tolower(s[i]));
        }
        if(cnt1 == cnt2) return true;
        return false;
    }
};