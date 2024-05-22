class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int len = 1;
        int count = 1;
        int elem = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] - 1 == elem)
            {
                count ++;
                elem = nums[i];
            }
            else if(nums[i] != elem)
            {
                count = 1;
                elem = nums[i];
            }
            len = max(len, count);
        }  
        return len;
    }
};