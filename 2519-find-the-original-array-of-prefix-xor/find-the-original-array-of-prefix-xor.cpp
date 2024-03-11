class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n = pref.size();
        vector<int>ans;
        ans.push_back(pref[0]);
        for(int i = 1; i < n; i++)
        {
            int x = pref[i] ^ pref[i-1];
            ans.push_back(x);
        }
        return ans;
    }
};