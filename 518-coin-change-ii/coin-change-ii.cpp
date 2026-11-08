class Solution {
public:
    int combinations(int ind, int target, vector<int> &coins, vector<vector<int>> &dp) {
        if(ind == coins.size()-1) {
            return (target % coins[ind] == 0); 
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int np = combinations(ind + 1, target, coins, dp);
        int p = 0;
        if(target >= coins[ind]) {
            p = combinations(ind, target - coins[ind], coins, dp);
        }
        return dp[ind][target] = np + p;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        return combinations(0, amount, coins, dp);
    }
};