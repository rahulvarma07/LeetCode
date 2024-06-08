class Solution {
public:
    
    int findMin(vector<int>& nums) {
        int strt = 0, end = nums.size()-1, ans = INT_MAX;
        while(strt <= end){
            int mid = (strt + end)/2;      
            if(nums[mid] < nums[end])
            {
                ans = min(ans, nums[mid]);
                end = mid-1;
            }
            else{
                ans = min(ans, nums[strt]);
                strt = mid + 1;
            }
        }
        return ans;
    }
};