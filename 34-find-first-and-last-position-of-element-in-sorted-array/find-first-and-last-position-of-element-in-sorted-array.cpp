class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int>ans(2, -1);
      int left = 0, right = nums.size() - 1;

      // FIRST OCCURENCE
      
      while(left <= right){
        int mid = (left + right)/2;
        if(nums[mid] == target){
            ans[0] = mid; 
            right = mid - 1;
        }
        else if(nums[mid] > target){
            right -= 1;
        }
        else{
            left = mid + 1;
        }
      }
      left = 0;
      right = nums.size() - 1;

      //LAST OCCURENCE
      while(left <= right){
        int mid = (left + right)/2;
        if(nums[mid] == target){
            ans[1] = mid;
            left = mid + 1;
        }
        else if(nums[mid] > target){
            right -= 1;
        }
        else{
            left = mid + 1;
        }
      }
      return ans;
    }
};