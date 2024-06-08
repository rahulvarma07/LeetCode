class Solution {
public:
    int findMin(vector<int>& nums) {
        int strt = 0, end = nums.size()-1;
        int ans = INT_MAX;
        while(strt <= end){
            int mid = (strt + end)/2;

            if(nums[mid] <= nums[strt] and nums[mid] <= nums[end]){
                ans = min(ans, nums[mid]);
                if(strt <= end){
                    end = mid - 1;
                }
            }
            else if(nums[strt] > nums[end]){
                strt = mid + 1;
            }
            else if(nums[strt] < nums[end]){
                end = mid - 1;
            }
        }
        return ans;
    }
};