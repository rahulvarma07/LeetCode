class Solution {
public: 
    void sub(int ind, vector<int>p, vector<vector<int>>&ans, vector<int>nums)
    {
        if(ind >= nums.size())
        {
            ans.push_back(p);
            return;
        }
        p.push_back(nums[ind]);
        sub(ind + 1, p, ans, nums);
        p.pop_back();
        sub(ind + 1, p, ans, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>p;
        vector<vector<int>>ans;
        int i = 0;
        sub(i, p, ans, nums);
        return ans;
    }
};