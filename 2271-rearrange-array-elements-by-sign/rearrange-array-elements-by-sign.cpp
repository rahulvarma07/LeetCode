class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>ans(nums.size(), 0);
       /*
       My Brute Force approach
       1. Take an array fix first half with positive and second half with negative.
       2. And alternatly arrange them
       */
       int pi = 0;
       int ni = nums.size() / 2;
       for(int i = 0 ; i < nums.size(); i++)
       {
         if(nums[i] > 0)
         {
            ans[pi] = nums[i];
            pi += 1;
         }
         else 
         {
            ans[ni] = nums[i];
            ni += 1;
         }
       }
       pi = 0;
       ni = nums.size() / 2;
       int i = 0;
       int j = 1;
       while(j < nums.size())
       {
          nums[i] = ans[pi];
          pi += 1;
          i += 2;
          nums[j] = ans[ni];
          ni += 1;
          j += 2;
       }
       return nums;
    }
};