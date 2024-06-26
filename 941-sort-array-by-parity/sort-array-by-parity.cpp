class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int strt = 0;
        int end = nums.size()-1;
        while(strt <= end){
            if(nums[strt] % 2 != 0){
                swap(nums[strt], nums[end]);
            }
            if(nums[strt] % 2 == 0){
                strt += 1;
            } 
            if(nums[end] %2 != 0){
                end -= 1;
            }
        }
        return nums;
    }
};