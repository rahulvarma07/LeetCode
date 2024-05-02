class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        unordered_map<int,int>ans;
        for(auto a:nums)
        {
            ans[a] += 1;
        }
    int maxx = -1;
    for(int i = 0; i < nums.size();i++ )
    {
        if(nums[i] > 0)
       {
        if(ans.find(-nums[i]) != ans.end()) maxx = max(maxx, nums[i]);
       }
    }
    return maxx;
    }   
};