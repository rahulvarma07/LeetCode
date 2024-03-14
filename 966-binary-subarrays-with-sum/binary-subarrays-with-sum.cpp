class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        unordered_map<int,int>ans;
        ans[0] = 1;
        int count = 0;
        int pref = 0;
        for(int i=0; i<nums.size();i ++)
        {
            pref += nums[i];
            int check = (pref - goal);
            if(ans.find(check) != ans.end())
            {
                count += ans[check];
            }
            ans[pref] ++;
        } 
        return count;
    }
};