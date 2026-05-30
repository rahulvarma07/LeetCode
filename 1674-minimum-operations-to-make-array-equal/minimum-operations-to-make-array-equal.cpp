class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        vector<int> nums(n, 0);
        for(int i = 0; i < n; i++) nums[i] = (2*i)+1;
        int x = n/2;
        int avg = (n%2 == 0? (nums[x]+nums[x-1])/2 : nums[x]);
        for(auto a: nums) {
            int diff = (avg-a);
            if(diff <= 0) break;
            ans+=diff;
        }
        return ans;
    }
};