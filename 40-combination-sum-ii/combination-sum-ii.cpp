class Solution {
public:
    void com(int ind, int k, vector<int>candidates, vector<int>p, vector<vector<int>>&ans)
    {
        if(k == 0)
        {
            ans.push_back(p);
            return;
        }
        for(int i = ind; i < candidates.size(); i++)
        {
            if(i > ind and candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > k) break;
            p.push_back(candidates[i]);
            com(i + 1,k - candidates[i], candidates, p, ans);
            p.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(), candidates.end());
        int i = 0;
        vector<int>p;
        vector<vector<int>>ans;
        com(i, target, candidates, p, ans);  
        return ans;      
    }
};