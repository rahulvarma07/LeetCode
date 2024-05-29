class Solution {
public:
    string reverseWords(string s) 
    {
        string ans = "";
        string dummy = "";
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] != ' ') dummy += s[i];
            else 
            {
                reverse(dummy.begin(), dummy.end());
                ans += dummy;
                dummy = "";
                ans += ' ';
            }
        }
        reverse(dummy.begin(), dummy.end());
        ans += dummy;
        return ans;
    }
};