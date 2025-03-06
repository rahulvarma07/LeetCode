class Solution {
public:
    int minSteps(int n) {
        if(n == 1) return 0;
        if(n <= 5) return n; 
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for(int i = 4; i < dp.size(); i++){
            int x = i;
            for(int j = 2; j < i; j++){
                if(i%j == 0){
                    x = min(x, dp[j]+(i/j));
                }
            }
            dp[i] = x;
        }
        return dp[dp.size()-1];
        return -1;
    }
};