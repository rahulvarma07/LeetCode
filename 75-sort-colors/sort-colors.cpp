class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 1){
                mid ++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high -= 1;
            }
            else{
                swap(nums[mid], nums[low]);
                low += 1;
                mid += 1;
            }
        }
    }
};