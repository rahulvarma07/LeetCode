class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxx = 1;
        vector<int>dp(nums.size()+1, 1);
        for(int i = 1; i < nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]){
                    cnt = max(cnt, dp[j]);
                }
            }
            dp[i] += cnt;
        }
        for(auto a : dp){
            maxx = max(maxx, a);
        }
        return maxx;
    }
};