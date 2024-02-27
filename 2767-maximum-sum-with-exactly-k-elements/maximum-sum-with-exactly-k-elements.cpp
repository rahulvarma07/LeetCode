class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
            int val = nums[nums.size()-1];
            int sum = val;
            k = k-1;
            while(k--)
            {
                val += 1;
                sum += val;
            }
        return sum;      
    }
};