class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(auto a: nums) {
            while(a > 0) {
                if(a%10 == digit) ans++;
                a /= 10;
            }
        }
        return ans;
    }
};