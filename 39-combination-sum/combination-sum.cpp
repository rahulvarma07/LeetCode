class Solution {
public:
    void com(int ind, int s, int k, vector<int>candidates, vector<int>p, vector<vector<int>>& ans)
    {
        if(ind >= candidates.size())
        {
            if(s == k)
            {
                ans.push_back(p);
            }
            return;
        }
        if(s == k)
        {
            ans.push_back(p);
            return;
        }
        if(s > k)
        {
            return;
        }
        p.push_back(candidates[ind]);
        com(ind, s + candidates[ind], k , candidates, p, ans);
        p.pop_back();
        com(ind + 1, s, k, candidates, p, ans);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>push;
        vector<vector<int>>ans;
        int sum = 0, index = 0;
        com(index, sum, target, candidates, push, ans);
        return ans;
    }
};