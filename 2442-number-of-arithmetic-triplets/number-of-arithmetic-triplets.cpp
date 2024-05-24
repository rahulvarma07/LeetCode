class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i; j < nums.size(); j++)
            {
                    if(abs(nums[i] - nums[j]) == diff)
                    {
                        for(int k = j; j < nums.size(); j++)
                        {
                            if(abs(nums[k] - nums[j]) == diff)
                            {
                                count += 1;
                                break;
                            }
                        }
                    }
            }
        }
        return count;
    }
};