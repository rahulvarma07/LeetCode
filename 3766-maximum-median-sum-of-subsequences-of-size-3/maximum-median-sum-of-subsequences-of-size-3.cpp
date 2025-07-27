class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        // 1 1 2 2 3 3 
        sort(nums.begin(), nums.end());
        long long int sum = 0;
        int i = 0, j = nums.size()-1, k = nums.size()-2;
        while(i < k){
            sum += nums[k];
            k -= 2;
            i += 1; 
        } 
        return sum;
    }
};