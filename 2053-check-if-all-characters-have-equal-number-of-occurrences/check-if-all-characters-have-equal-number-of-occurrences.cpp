class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int>ans;
        int minn = 0;
        for(auto a:s) 
        {
            ans[a] += 1;
            minn = max(minn, ans[a]);
        }
        for(auto a: ans)
        {
            if(a.second != minn) return false;
        }
        return true;
    }
};