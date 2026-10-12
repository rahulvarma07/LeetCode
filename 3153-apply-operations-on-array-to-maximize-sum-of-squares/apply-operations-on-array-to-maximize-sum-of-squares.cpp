class Solution {
public:
    vector<int> totalBits = vector<int>(32, 0);
    int mod = 1e9+7;
    
    void setTheBits(int num) {
        int i = 32;
        while(num) {
            totalBits[--i] += (num % 2);
            num /= 2;
        }
    }

    long long int getLargestNumber() {
        long long int ans = 0;
        for(int i = 31; i >= 0; i--) {
            if(totalBits[i] > 0) {
                ans = ans + (2, pow(2, 31-i));
                totalBits[i]--;
            }
        }
        return ans;
    }
    
    int maxSum(vector<int>& nums, int k) {
        long long int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            setTheBits(nums[i]);
        }
        while(k--) {
            long long int res = getLargestNumber();
            ans = ((ans % mod) + ((res * res) % mod)) % mod; 
        }
        return ans;
    }
};