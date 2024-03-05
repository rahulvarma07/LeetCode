class Solution {
public:
    int minimumLength(string s) 
    {
        if(s.size() == 1)return 1;
        int i = 0;
        int j = s.size()-1;
        while(i < j)
        {
            if(s[i] != s[j])
            {
                return (j - i) + 1;   
            }
            if(s[i] == s[j])
            {
                if(s[i+1] == s[j])
                {
                    i += 1;
                }
                else if(s[j-1] == s[i])
                {
                    j -= 1;
                }
                else if(i+1 == j-1)
                {
                    if(s[i+1] != j) return 1;
                }
                else
                {
                    i += 1;
                    j -= 1;
                }  
            }
        }
        return 0;
    }
};