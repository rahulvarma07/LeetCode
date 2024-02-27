class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int maxx = 0;
        for(int i=0;i<nums.size();i++)
        {
            maxx = max(maxx,nums[i]);
        }
        auto sum = 0;
        while(k > 0)
        {
            sum += maxx;
            maxx += 1;
            k -= 1;
        }
        return sum;
    }
};