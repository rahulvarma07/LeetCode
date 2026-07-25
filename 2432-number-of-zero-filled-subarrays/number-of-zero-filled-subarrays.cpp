class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                int j = i;
                for(    ; j < nums.size() && nums[j] == 0; j++) {
                    ans = ans + (j-i+1);
                }
                i = j;
            }
        }
        return ans;
    }
};