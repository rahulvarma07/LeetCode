class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
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