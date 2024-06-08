class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // Base Conditions...
        if(n == 1)return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int strt = 1, end = n-2;
        while(strt <= end){
            int mid = (strt + end)/2;
            if(nums[mid] != nums[mid+1] and nums[mid] != nums[mid-1]){
                return nums[mid];
            }
            else if((nums[mid] == nums[mid-1] and mid % 2 != 0) || (mid % 2 == 0 and nums[mid] == nums[mid+1]))
            {
                strt = mid + 1;
            }
            else end = mid - 1;
        }
        return 0;
    }
};