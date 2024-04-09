class Solution {
public:
    int numSplits(string s) 
    {
        unordered_map<char, int> ans1;
        unordered_map<char, int > ans2;
        for(auto a: s)
        {
            ans1[a] = 1;
            ans2[a] = 1; 
        }
        vector<int>check1(s.size(), 0);
        vector<int>check2(s.size(), 0);
        int count = 0;
        for(int i = 0; i < s.size(); i ++)
        {
            if(ans1[s[i]] == 1)
            {
                count += 1;
                ans1[s[i]] = 0;
            }
            check1[i] = count;
        }
        count = 0;
        for(int i = s.size()- 1; i > -1; i --)
        {
            if(ans2[s[i]] == 1)
            {
                count += 1;
                ans2[s[i]] = 0;
            }
            check2[i] = count;
        }
    int right = 0;
    int left = 1;
    int ans = 0;
    while(left < s.size())
    {
        if(check1[right] == check2[left]) ans += 1;
        right += 1;
        left += 1;
    }
    return ans;  
    }
};