class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        vector<bool> isIncreasing(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] <= nums[i-1]) {
                isIncreasing[i] = 0;
            }
        }
        for(int i = nums.size()-1; i >= 0; i--){
            if(isIncreasing[i] == 0){
                return i;
            }
        }
        return 0;
    }
};