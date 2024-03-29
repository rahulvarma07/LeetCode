class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int sum = 0, left = 0, right = 0;
        int  maxx = 0;
        long long count = 0;
        for(auto a:nums) maxx = max(maxx,a);
        int freq = 0;
        while(right < nums.size())
        {
            sum = nums[right];
            if(sum == maxx) freq ++;
            while(left <= right and freq >= k)
            {
                if(nums[left] == maxx)freq -= 1;
                left += 1;
                count += nums.size() - right;
            }
            right += 1;
        }
        return count; 
    }
};