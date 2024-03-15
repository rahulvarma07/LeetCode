class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int mul = 1;
        int mul1 = 1;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            mul *= nums[i];
        }
        if(mul == 0)
        {
            int check = 0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] == 0) check = i;
            }
            nums[check] = 1;
            for(int i=0;i<nums.size();i++)
            {
                mul1 *= nums[i];
            }
            ans[check] = mul1;
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                ans[i] = ((mul)/(nums[i]));
            }
        }
        return ans; 
    }
};