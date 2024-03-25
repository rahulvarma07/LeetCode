class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int>ans;
        for(auto a:nums) ans[a] += 1;
        vector<int>nums1;
        for(auto n:ans)
        {
            if(n.second >= 2)nums1.push_back(n.first);
        } 
        return nums1;  
    }
};