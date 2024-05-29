class Solution {
public:
    string sortSentence(string s) 
    {
        unordered_map<int, string>ans;
        string dummy = "";
        int maxx = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ') continue;
            if(isdigit(s[i]))
            {
                int n = s[i] - '0';
                maxx = max(maxx, n);
                ans[n] = dummy;
                dummy = "";
            }
            else
            {
                dummy += s[i];
            }
        }
        dummy.clear();
        for(int i = 1; i < maxx; i ++)
        {
            dummy += ans[i];
            dummy += ' ';
        }
        dummy += ans[maxx];
        return dummy;
    }
};