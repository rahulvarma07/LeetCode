class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int l = 0, h = n-1;
        for(int i = n-1; i >= 0 && l <= h; i--) {
            if(abs(nums[l]) < abs(nums[h])) {
                ans[i] = (nums[h] * nums[h]);
                h--;
            }else {
                ans[i] = (nums[l] * nums[l]);
                l++;
            }
        }
        return ans;
    }
};