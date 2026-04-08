class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int mod = 1e9+7;
        for(int i = 0; i < q.size(); i++) {
            for(int j = q[i][0]; j <= q[i][1]; j += q[i][2]){
                long long int res = (1LL * nums[j] * q[i][3]) % mod;
                nums[j] = (int)res;
            }
        }
        int res = 0;
        for(auto a: nums) {
            res = res ^ a;
        }
        return res;
    }
};