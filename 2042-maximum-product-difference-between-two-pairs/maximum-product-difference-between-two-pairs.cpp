class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxx = nums[nums.size() - 1] * nums[nums.size() - 2];
        int minn = nums[0] * nums[1];
        return maxx - minn;
    }
};