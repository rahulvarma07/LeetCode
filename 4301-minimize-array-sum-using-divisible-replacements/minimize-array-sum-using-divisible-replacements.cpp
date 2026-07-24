class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        unordered_set<int> mySet;
        int n = nums.size();
        for(auto a: nums) mySet.insert(a);
        if(mySet.find(1) != mySet.end()) return n;
        for(int i = 0; i < n; i++) {
            int num = nums[i];
            for(int j = 2; j <= sqrt(num); j++) {
                if(num % j == 0) {
                    if(mySet.find(j) != mySet.end()) {
                        nums[i] = j;
                        break;
                    }
                    int x = (num/j);
                    if(mySet.find(x) != mySet.end()) {
                        nums[i] = x;
                    }
                }
            }
        }
        long long ans = 0;
        for(auto a: nums) ans = ans+a;
        return ans;
    }
};