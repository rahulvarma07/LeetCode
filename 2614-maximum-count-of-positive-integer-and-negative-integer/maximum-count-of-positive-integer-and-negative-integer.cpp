class Solution {
public:
    int maximumCount(vector<int>& nums) {
        // -3 -2 -1 0 0 1 2
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= 1){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        int x = high;
        low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] > -1){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        int y = nums.size()-x-1;
        y = max(y, low);
        return y;
    }
};