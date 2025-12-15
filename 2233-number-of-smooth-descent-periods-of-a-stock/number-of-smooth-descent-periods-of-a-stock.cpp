class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int i = 0, n = prices.size(), j = 1;
        long long int ans = 0;
        for(j = 1; j < n; j++) {
            if(prices[j]+1 != prices[j-1]) {
                long long int L = (j - i);
                ans += (L * (L+1))/2;
                i = j;
            }
        }
        long long int L = (j - i);
        ans += (L * (L+1))/2;
        return ans;
    }
};