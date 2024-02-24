class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        vector<int>nums1 = nums;
        cout<<endl;
        sort(nums.begin(),nums.end());
        vector<int>ans = nums;
        reverse(ans.begin(),ans.end());
        if(nums1 == nums or nums1 == ans)return true;
        else return false;              
    }
};