class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longestInc = 1, longestDec = 1;
        int x = 0, y = nums[0];
        // Longest Increasing
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > y){
                longestInc = max(longestInc, (i-x)+1);
                y = nums[i];
            }
            else{
                x = i;
                y = nums[i];
            }
        }
        x = 0, y = nums[0];
        // Longest Decreasing
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < y){
                longestDec = max(longestDec, (i-x)+1);
                y = nums[i];
            }
            else{
                x = i;
                y = nums[i];
            }
        }
        return max(longestInc, longestDec);
    }
};