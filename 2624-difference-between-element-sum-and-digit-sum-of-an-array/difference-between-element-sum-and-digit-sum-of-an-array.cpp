class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int sum1 = 0;
        int sum2 = 0;
        for(auto a: nums) sum1 += a;
        for(int i = 0; i < nums.size(); i ++)
        {
            int num = nums[i];
            while(num > 0)
            {
                int rem = num % 10;
                sum2 += rem;
                num = num/10;
            }
        }
        return abs(sum1 - sum2);  
    }
};