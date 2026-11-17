class Solution {
public:
    bool isPrime(int n) {
        if(n == 1) return false;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int ind1 = 0, ind2 = n-1;
        for(    ; ind1 < n; ind1++) {
            if(isPrime(nums[ind1])) break;
        } 
        if(ind1 == n) return 0;
        for(    ; ind2 >= 0; ind2--) {
            if(isPrime(nums[ind2])) break;
        }
        return (ind2 - ind1);
    }
};