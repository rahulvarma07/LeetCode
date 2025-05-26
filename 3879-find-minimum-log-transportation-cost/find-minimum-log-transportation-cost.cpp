class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        int x = max(n, m);
        if(x <= k) return 0;
        long long int ans = ((x-k));
        ans *= ((x)-(x-k));
        return ans;
    }
};