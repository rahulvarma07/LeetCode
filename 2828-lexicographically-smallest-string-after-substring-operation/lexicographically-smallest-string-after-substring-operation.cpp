class Solution {
public:
    string smallestString(string s) 
    {
        int j = 0;
        int count = 0;
        while(j < s.size() and s[j] == 'a')
        {
            j ++;
            count += 1;
        }
        if(count == s.size())
        {
            s[s.size() - 1] = 'z';
            return s;
        }
        for(; j < s.size() and s[j] != 'a'; j ++)
        {
            char c = s[j] - 1;
            s[j] = c;
        }
    return s;  
    }
};