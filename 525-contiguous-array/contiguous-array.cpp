class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)nums[i] = -1;
        }
        int sum = 0;
        int mx = 0;
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            if(sum == 0) mx = i+1;
            if(ans.find(sum)!=ans.end()) mx = max(mx,i-ans[sum]);
            else ans[sum] = i;
        }
        return mx;
    }
};