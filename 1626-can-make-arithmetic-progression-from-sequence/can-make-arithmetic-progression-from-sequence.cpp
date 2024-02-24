class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int diff = nums[1]-nums[0];
        cout<<diff;
        int count = 1;
        int i = 1;
        int j = 2;
        while(j <= nums.size()-1)
        {
            if(nums[i]+diff == nums[j])
            {
                count += 1;
                i += 1;
                j += 1;
            }
            else if(nums[i]+diff != nums[j])
            {
                return false;
                break;
            }
        } 
        if(count == nums.size()-1)return true;
        else return false;     
    }
};