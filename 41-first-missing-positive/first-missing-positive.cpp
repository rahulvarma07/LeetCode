class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > 0) ans.push_back(nums[i]);
        }
        if(ans.size() == 0) return 1;
        if(ans[0] != 1 and ans.size() >= 1)return 1;
        int i = 0;
        int j = i+1;
        while(j < ans.size())
        {
            if(ans[i] == ans[j])
            {
                i += 1;
                j += 1;
            }
            else if(ans[i]+1 != ans[j]) return ans[i]+1;
            else if(ans[i]+1 == ans[j])
            {
                i += 1;
                j += 1;
            }
        }
        return(ans[ans.size()-1]+1);
    }
};