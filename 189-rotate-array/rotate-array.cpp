class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int>v1;
        int rem = k%(nums.size());
        int sub = (nums.size())-rem;
        for(int i = sub;i<nums.size();i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=0;i<sub;i++)
        {
            v1.push_back(nums[i]);
        }
        nums = v1;
    }
};