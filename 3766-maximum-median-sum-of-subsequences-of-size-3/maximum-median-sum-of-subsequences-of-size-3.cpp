class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int n = nums.size();
       int d = n/3, i = n-2;
       long long int sum = 0;
       while(d--){
        sum += nums[i];
        i -= 2;
       }
       return sum;
    }
};