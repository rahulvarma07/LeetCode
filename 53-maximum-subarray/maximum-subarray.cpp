class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx = INT_MIN, n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            maxx = max(maxx, sum);
            if(sum < 0) {
                sum = 0;
            }
        }
        return maxx;
    }
};