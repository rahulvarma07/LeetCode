class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx1 = nums[0], maxx2 = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > maxx1) {
                maxx2 = maxx1;
                maxx1 = nums[i];
            }else if(nums[i] > maxx2) {
                maxx2 = nums[i];
            }
        }
        return ((maxx1-1)*(maxx2-1));
    }
};