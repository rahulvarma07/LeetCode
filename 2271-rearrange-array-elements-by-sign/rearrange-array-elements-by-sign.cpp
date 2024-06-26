class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        std::ios_base::sync_with_stdio(false);
        std::cout.tie(0);
        
        vector<int>ans(nums.size(), 0);
        int posind= 0;
        int negind = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                ans[negind] = nums[i];
                negind += 2;
            }
            else
            {
                ans[posind] = nums[i];
                posind += 2;
            }
        }   
        return ans;
    }
};