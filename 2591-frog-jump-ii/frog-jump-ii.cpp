class Solution {
public:
    int maxJump(vector<int>& nums) 
    {
        if(nums.size() == 2) return nums[1];
        int left = 0;
        int right = 2;
        int maxx = 0;
        int diff = 0;
        while(right < nums.size())
        {
            diff = nums[right] - nums[left];
            maxx = max(maxx,diff);
            right += 1;
            left += 1;
        }
        return maxx;
    }
};