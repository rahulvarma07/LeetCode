class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int>ans;
        for(auto a:nums)
        {
            ans[a] ++;
        }
        nums.clear();
        for(auto a:ans)
        {
            if((a.second) > (n/3)) nums.push_back(a.first);
        }
        return nums;
    }
};