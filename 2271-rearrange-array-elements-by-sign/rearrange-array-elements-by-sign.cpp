class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        /*
        "OPTIMIZED SOLUTION"
        1. take positive index as "0" and negative index as "1".
        2. Iterate through nums
        3. Change values in ans vector..
        */ 
        vector<int>ans(nums.size(), 0);
        int pi = 0;
        int ni = 1;
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                ans[ni] = nums[i];
                ni += 2;
            }
            else 
            {
                ans[pi] = nums[i];
                pi += 2;
            }
        }
    return ans;   
    }
};