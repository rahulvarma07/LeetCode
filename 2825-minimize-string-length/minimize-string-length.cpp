class Solution {
public:
    int minimizedStringLength(string s) 
    {
        unordered_map<char,int>ans;
        for(auto a:s)
        {
            ans[a] += 1;
        }
        return ans.size();
        
    }
};