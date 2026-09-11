class Solution {
public:
    void generate(vector<int> &nums, int &t, int &ans, int i, int sum) {
        if(i == nums.size()) {
            ans += (sum == t);
            return;
        }
        generate(nums, t, ans, i+1, sum + nums[i]);
        generate(nums, t, ans, i+1, sum - nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
       int ans = 0;
       generate(nums, target, ans, 0, 0);
       return ans;
    }
};