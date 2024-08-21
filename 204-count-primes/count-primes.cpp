class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        int ans = 0;
        vector<int>nums(n+1, 0);
        for(int i = 2; i <= n; i++){
            if(nums[i] == 0){
                for(int j = i*2; j <= n; j += i){
                    nums[j] = 1;
                }
            }
        }
        for(int i = 2; i < n; i++){
            if(nums[i] == 0) ans += 1;
        }
        return ans;
    }
};