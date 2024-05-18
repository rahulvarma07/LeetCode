class Solution {
public:
    void com(int ind, vector<int>nums, vector<int>p, map<vector<int>, int>&ans)
    {
        if(ind >= nums.size())
        {
            if(ind == nums.size())
            {
                sort(p.begin(), p.end());
                ans[p] += 1;
                return;
            }
            return;
        }

        p.push_back(nums[ind]);
        com(ind + 1, nums, p, ans);
        p.pop_back();
        com(ind + 1, nums, p, ans);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        map<vector<int>, int>ans;
        int i = 0;
        vector<int>n;
        com(i, nums, n, ans);
        vector<vector<int>>finalans;
        for(auto a: ans)
        {
            finalans.push_back(a.first);
        }
       // sort(finalans.begin(), finalans.end());
        return finalans;
    }
};