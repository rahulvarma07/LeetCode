class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int maxx = -1;
        int i = 0, j = 0;
        int z = 0;
        while(j < nums.size() && i <= j){
            if(nums[j] == 0) z++;
            while(z >= 2){
                if(nums[i] == 0){
                    z--;
                }
                i++;
            }
            maxx = max(maxx, (j-i));
            j++;
        }
        return maxx;
    }
};