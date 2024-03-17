class Solution {
public:
    bool isSubstringPresent(string s) 
    {
        vector<string>ans1;
        vector<string>ans2;
        string s1 = s;
        reverse(s1.begin(),s1.end());
        for(int i = 0; i<s.size();i++)
        {
            string ans = "";
            for(int j = i; j < s.size() ; j ++)
            {
                ans += s[j];
                if(ans.size() == 2)ans1.push_back(ans);
                if(ans.size() > 2) break;
            }
        }
        for(int i = 0; i<s1.size();i++)
        {
            string ans = "";
            for(int j = i; j < s1.size() ; j ++)
            {
                ans += s1[j];
                if(ans.size() == 2)ans2.push_back(ans);
                if(ans.size() > 2) break;
            }
        }
        for(int i = 0; i < ans1.size();i++)
        {
            for(int j = 0; j < ans2.size();j++)
            {
                if(ans1[i] == ans2[j])return true;
            }
        }
        return false;
    }
};