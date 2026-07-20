class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int i = 0, j = n-1;
        for(int x = 0; x < n; x++) {
            if(nums[x] % 2 == 0) {
                ans[i] = nums[x];
                i++;
            }else{
                ans[j] = nums[x];
                j--;
            }
        }
        return ans;
    }
};