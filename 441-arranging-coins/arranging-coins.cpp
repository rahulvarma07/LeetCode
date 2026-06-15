class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 1) return 1;
        long long int l = 1, r = n;
        while(l <= r) {
            long long int m = (l + r)/2;
            long long int formula = (m * (m+1)/2);
            if(formula == n) return m;
            if(formula >= n) {
                r = m-1;
            }else {
                l = m+1;
            }
        }
        return (int)r;
    }
};