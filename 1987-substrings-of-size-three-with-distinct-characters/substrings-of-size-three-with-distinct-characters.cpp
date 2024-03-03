class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        string s1 = "";
        int x = 0;
        int y = 1;
        int z = 2;
        int count = 0;
        while(z <= s.size()-1)
        {
            if(s[x] != s[y] and s[y] != s[z] and s[z] != s[x]) count += 1;
            x += 1;
            y += 1;
            z += 1;
        }
        return count;

    }
};