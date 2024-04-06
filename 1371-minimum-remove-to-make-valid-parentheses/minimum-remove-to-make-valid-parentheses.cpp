class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        int count = 0;
        string ans = "";
        stack<char>st;
        stack<char>ans1;
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]); 
            }
            if(s[i] == ')')
            {
                if(! st.empty())
                {
                  if(st.top() == '(') st.pop();
    
                }
                else
                {
                    s[i] = '#';
                }
            }
        }
        count = 0;
        for(int i = s.size()-1 ; i > -1; i --)
        {
            if(s[i] == ')')
            {
                ans1.push(s[i]);
            }
            if(s[i] == '(')
            {
                if(! ans1.empty())
                {
                   if(ans1.top() == ')') ans1.pop();
                } 
                else
                {
                    s[i] = '#';
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