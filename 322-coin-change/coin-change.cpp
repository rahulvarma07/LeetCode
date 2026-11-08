class Solution {
public:
    long long int minCoins(int ind, int target, vector<int> &coins, vector<vector<int>> &dp) {
        if(target < 0) return INT_MAX;
        if(ind == coins.size()-1) {
            if(target % coins[ind] == 0) return target / coins[ind];
            // I have only one option now..
            return INT_MAX;
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        long long int np = minCoins(ind + 1, target, coins, dp);
        long long int p = INT_MAX;
        if(target >= coins[ind]) {
            p = 1 + minCoins(ind, target - coins[ind], coins, dp);
        }
        return dp[ind][target] = min(np, p);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        long long int ans = minCoins(0, amount, coins, dp);
        return (ans == INT_MAX ? -1 : ans);
    }
};