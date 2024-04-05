class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>st;
        for(int i = 0 ; i < s.size(); i ++)
        {
            if(s[i] >= 'A' and s[i] <= 'Z')
            {
                if(tolower(s[i]) == (s[i+1]))
                {
                    swap(s[i], s[i+1]);
                }
            }
        }
        cout << s;
        for(int i = 0; i < s.size() ; i ++)
        {
            if(s[i] >= 'a' and s[i] <= 'z')
            {
                char b = s[i];
                if(! st.empty())
                {
                    if(toupper(b) == st.top())
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                 else
                    {
                        st.push(s[i]);
                    }
            }
            if(s[i] >= 'A' and s[i] <= 'Z')
            {
                char a = s[i];
                if(! st.empty())
                {
                if(tolower(a) == st.top())
                {
                   st.pop(); 
                }
                else
                {
                   st.push(s[i]);
                }
                }
                else
                {
                   st.push(s[i]);
                }
            }
        }
        string ans = "";
        while(! st.empty())
        {
            ans += st.top();
            st.pop();
        } 
        reverse(ans.begin(),ans.end());
        return ans;      
    }
};