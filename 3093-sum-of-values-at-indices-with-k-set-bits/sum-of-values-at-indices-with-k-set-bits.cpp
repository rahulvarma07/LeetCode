class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        vector<int>indices;
        int count = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i ++)
        {
            int num = i;
            count = 0;
            while(num > 0)
            {
                num = num & (num -1);
                count += 1;
            }
            if(count == k) sum += nums[i];
        }   
        return sum;     
    }
};