class Solution {
public:
    bool check(vector<int>& nums) {
      int n = nums.size();
      int count = 0;
      for(int i = 1; i < n; i++){
        if(nums[i-1] > nums[i]){
            count += 1;
        }
      }
      if(nums[n-1] > nums[0]) count++;

      if(count <= 1)return true;
      return false;
    }
};