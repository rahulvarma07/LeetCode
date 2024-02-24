class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        unordered_map<int,int>ans;
        for(auto a:nums)
        {
            ans[a] += 1;
        }  
        for(auto a:ans)
        {
            if(a.second >= nums.size()/2)return a.first;
        } 
        return 0;
    }
};