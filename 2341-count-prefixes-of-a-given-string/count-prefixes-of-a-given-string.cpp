class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string , int>ans;
        for(auto a: words)
        {
            ans[a] += 1;
        }
        string check = "";
        int ret = 0;
        for(int i =0; i < s.size(); i++)
        {
            check += s[i];
            if(ans.find(check) != ans.end()) ret += ans[check];
        }
        return ret;
    }
};