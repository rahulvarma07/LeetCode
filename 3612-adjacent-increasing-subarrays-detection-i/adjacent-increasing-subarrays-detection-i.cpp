class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
       vector<int>ans(nums.size()-k+1, 0);
       for(int i = 0; i < nums.size()-k+1; i++){
            bool isTrue = true;
            for(int j = i; j < i+k; j++){
                if(j != i && nums[j] <= nums[j-1]) isTrue = false;
            }
            if(isTrue) ans[i] = 1;
       }
       for(int i = 0; i < ans.size()-k; i++){
        if(ans[i] == 1 && ans[i+k] == 1) return true;
       }
       return false;
    }
};