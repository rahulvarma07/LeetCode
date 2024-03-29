class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int>ans;
        vector<int>v;
        for(int i = 0; i < nums.size(); i ++)
        {
           int sum = nums[i];
           if(ans.find(target - sum) != ans.end())
           {
            v.push_back(ans[target - sum]);
            v.push_back(i);
           }
           ans[sum] = i;
        }
    return v;  
    }
};