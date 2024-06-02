class Solution {
public:
    string sortVowels(string s) {
        string check = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(tolower(s[i]) == 'a' or tolower(s[i]) == 'e' or tolower(s[i]) == 'i' or tolower(s[i]) == 'o' or tolower(s[i]) == 'u')
            {
                check += s[i];
            }
        }
        sort(check.begin(), check.end());
        int a = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(tolower(s[i]) == 'a' or tolower(s[i]) == 'e' or tolower(s[i]) == 'i' or tolower(s[i]) == 'o' or tolower(s[i]) == 'u')
            {
                s[i] = check[a];
                a += 1;
            }
        }
        return s;
    }
};