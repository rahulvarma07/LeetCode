class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        vector<int> ans(nums.size(), 0);
        for(int x = 0; x < nums.size(); x++) {
            if(nums[x]%2 == 0) {
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