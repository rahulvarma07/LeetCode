class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1, cnt = 0;
        vector<int> ans(nums.size(), 0);
        for(auto a : nums) {
            if(a == 0) {
                cnt++;
                continue;
            }
            mul *= a;
        }
        if(cnt > 1) return ans;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                ans[i] = mul/nums[i];
            }else {
                if(nums[i] == 0) {
                    ans[i] = mul;
                }
            }
        }
        return ans;
    }
};