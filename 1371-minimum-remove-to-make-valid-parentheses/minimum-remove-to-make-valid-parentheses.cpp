class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        int count = 0;
        string ans = "";
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] == '(')
            {
                count += 1; // st.push;
            }
            if(s[i] == ')')
            {
                if(count == 0)
                {
                    s[i] = '#';
                }
                else
                {
                    count -= 1;
                }
            }
        }
        count = 0;
        for(int i = s.size()-1 ; i > -1; i --)
        {
            if(s[i] == ')')
            {
                count += 1;
            }
            if(s[i] == '(')
            {
                if(count == 0)
                {
                   s[i] = '#';
                } 
                else
                {
                    count -= 1;
                }
            }
        }
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] != '#') ans += s[i];
        }
        return ans;
    }
};