class Solution {
public:
    int  com(int ind, int sum, vector<int>nums)
    {
       if(ind == nums.size()) return sum;
       int rec1 =  com(ind + 1, sum ^ nums[ind], nums);
       int rec2 =  com(ind + 1, sum, nums);
       return rec1 + rec2;
    }
    int subsetXORSum(vector<int>& nums) 
    {
        int i = 0, sum = 0;
        int ans = com(i, sum, nums);
        return ans;
        
    }
};