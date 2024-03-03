class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) 
    {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > coins)break;
            count += 1;
            coins -= nums[i];
        }
        return count;
    }
};