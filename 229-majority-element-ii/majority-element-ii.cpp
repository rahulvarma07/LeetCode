class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> ans;
        vector<int>v; 
        for(int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]] += 1;
            if(ans[nums[i]] == (n/3) + 1) v.push_back(nums[i]);
        }
        return v;
    }
};