class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int ans = INT_MAX, sum = 0;
        while(i <= j && j <= nums.size()-1){
            sum += nums[j];
            while(sum > target && i <= j){
                ans = min(ans, (j-i)+1);
                sum -= nums[i];
                i++;
            }
            if(sum == target) ans = min(ans, (j-i)+1);
            j ++;
        }
        return ans == INT_MAX? 0 : ans;
    }
};