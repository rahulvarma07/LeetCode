class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        while(i <= nums.size()-3){
            if(nums[i] == 1){
                i += 1;
                continue;
            }
            nums[i] = (nums[i]+1)%2;
            nums[i+1] = (nums[i+1]+1)%2;
            nums[i+2] = (nums[i+2]+1)%2;
            ans += 1;
            i += 1;
        }
        for(auto a:nums){
            if(a == 0) return -1;
        }
        return ans;
    }
};