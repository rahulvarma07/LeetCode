class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev = 0;
        long long ans = 0;
        int sum = 0;
        while(n != 0) {
            int d = (n % 10);
            if(d != 0) rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        while(rev != 0) {
            sum += (rev % 10);
            ans = ans * 10 + (rev % 10);
            rev /= 10;
        }
        ans *= sum;
        return ans;
    }
};