class Solution {
public:
    string removeStars(string s) 
    {
        stack<char>ans;
        string sol = "";
        for(int i = 0; i < s.size() ; i ++)
        {
            if(s[i] != '*')
            {
                ans.push(s[i]);
            }
            if(s[i] == '*')
            {
                ans.pop();
            }
        } 
        if(ans.size() == 0)return "";
        while(! ans.empty())
        {
            sol += ans.top();
            ans.pop();
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};