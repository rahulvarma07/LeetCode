class Solution {
public:
    void subseq(int i, int &s, vector<int>nums, vector<int>p, vector<vector<int>>&ans)
    {
        if(i >= s)
        {
            ans.push_back(p);
            return;
        }
        p.push_back(nums[i]);
        subseq(i + 1, s, nums, p, ans);
        p.pop_back();
        subseq(i + 1, s, nums, p, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>p;
        int i = 0;
        int s = nums.size();
        subseq(i, s, nums, p, ans);
        return ans;
    }
};