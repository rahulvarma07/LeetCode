class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int left = 0 , right = 0;
        int sum = 1;
        int count = 0;
        while(right < nums.size())
        {
            sum *= nums[right];
            while(left <= right and sum >= k) 
            {
                sum = sum / nums[left];
                left += 1;
            }
            count += 1 + (right - left);
            right += 1;
        }
        return count;
    }
};
