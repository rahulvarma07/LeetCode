class Solution {
public:
    void compute(int i, vector<vector<int>>&ans, vector<int>&nums, vector<int>&group, int n){
        if(i == n){
            ans.push_back(group);
            return;
        }
        else{
            group.push_back(nums[i]);
            compute(i+1, ans, nums, group, n);
            group.pop_back();
            while(i+1 < n && nums[i] == nums[i+1]){
                i++;
            }
            compute(i+1, ans, nums, group, n);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>group;
        int i = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        compute(i, ans, nums, group, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};