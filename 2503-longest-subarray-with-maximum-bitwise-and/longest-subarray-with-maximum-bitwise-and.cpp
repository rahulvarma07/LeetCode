class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxx = nums[0];
        for(int i = 1; i < nums.size(); i++) maxx = max(maxx, nums[i]);
        int ans = 0, c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != maxx){
                c = 0;
                continue;
            }
            c++;
            ans = max(ans, c);
        }
        return ans;
    }
};