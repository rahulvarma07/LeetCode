class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        unordered_map<int,int>ans;
        ans[0] = 1;
        int count = 0;
        int pref = 0;
        for(int i=0; i<nums.size() ; i ++)
        {
            pref += nums[i];
            if(ans.find(pref - goal) != ans.end())
            {
                count += ans[pref - goal];
            }
            ans[pref] ++;
        } 
        return count;
    }
};