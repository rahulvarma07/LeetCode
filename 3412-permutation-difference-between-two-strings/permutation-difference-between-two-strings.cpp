class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>ans;
        for(int i = 0; i < s.size(); i++) ans[s[i]] = i;
        int sum = 0;
        for(int i = 0; i < t.size(); i++)
        {
            sum += abs(ans[t[i]] - i);
        }
        return sum;
    }
};