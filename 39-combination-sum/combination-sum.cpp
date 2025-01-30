class Solution {
public:
    void compute(int i, int sum, vector<int>&check, vector<vector<int>>&ans, vector<int>&nums, int target){
        if(i >= nums.size()){
            if(sum == target) ans.push_back(check);
            return;
        }
        if(sum == target){
            ans.push_back(check);
        }
        if(sum+nums[i] > target) return;
        if(sum > target) return;
        check.push_back(nums[i]);
        sum += nums[i];
        compute(i, sum, check, ans, nums, target);
        check.pop_back();
        sum -= nums[i];
        compute(i+1, sum, check, ans, nums, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        int i = 0;
        vector<vector<int>>ans;
        vector<int>check;
        sort(candidates.begin(), candidates.end());
        compute(i, sum, check, ans, candidates, target);
        return ans;
    }
};