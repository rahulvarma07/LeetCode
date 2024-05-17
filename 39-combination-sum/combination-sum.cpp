class Solution {
public:
    void comb(int i, int k, vector<int>candidates, vector<vector<int>>&ans, vector<int>add)
    {
        if(i >= candidates.size())
        {
            if(k == 0) ans.push_back(add);
            return;
        }
        if(candidates[i] <= k)
        {
            add.push_back(candidates[i]);
            comb(i , k - candidates[i], candidates, ans, add);
            add.pop_back();
        }
        comb(i+1, k, candidates, ans, add);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>add;
        comb(0, target, candidates, ans, add);
        return ans;
    }
};