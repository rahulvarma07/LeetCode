class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<bool> isPrime(1e5+100, true);
        isPrime[1] = false;
        for(int i = 2; i < isPrime.size(); i++) {
            if(isPrime[i]) {
                for(int j = i+i; j < isPrime.size(); j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> nextPrime(1e5+100, 0);
        vector<int> nextNonPrime(1e5+100, 0);
        int np = -1, nnp = -1;
        for(int i = isPrime.size()-1; i >= 0; i--) {
            nextPrime[i] = np;
            nextNonPrime[i] = nnp;
            if(isPrime[i]) np = i;
            else nnp = i;
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i%2 == 0 && !isPrime[nums[i]]) {
                ans += (nextPrime[nums[i]] - nums[i]);
            }else if(i%2 == 1 && isPrime[nums[i]]) {
                ans += (nextNonPrime[nums[i]] - nums[i]);
            }
        }
        return ans;
    }
};