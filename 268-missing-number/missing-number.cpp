class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // Most Optimized Solution using Xor..
        // Xor removes the duplicates..
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i <= nums.size(); i++){
            if(i != nums.size()) sum1 ^= nums[i];
            sum2 ^= i;
        }
        return sum2 ^ sum1;
    }
};