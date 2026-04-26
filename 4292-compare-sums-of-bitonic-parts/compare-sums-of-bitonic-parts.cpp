class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        long long int sum1 = nums[0], sum2 = nums[n-1];
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) sum1 += nums[i];
            else break;
        }
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] > nums[i+1]) sum2 += nums[i];
            else break;
        }
        if(sum1 > sum2) return 0;
        else if(sum1 < sum2) return 1;
        return -1;
    }
};