class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(mid == 0 && nums[mid+1] != nums[mid]) return nums[0];
            if(mid == nums.size()-1 && nums[nums.size()-2] != nums[nums.size()-1]) return nums[mid];
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            else if((nums[mid] == nums[mid+1] && mid%2 != 0) || (nums[mid] == nums[mid-1] && mid%2 == 0)) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};