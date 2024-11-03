class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, ans = -1, z = 0;
        while(j < nums.size() && i <= j){
            if(nums[j] == 0) z++;
            while(z > k && i <= j){
                if(nums[i] == 0){
                    z--;
                }
                i++;
            }
            ans = max(ans, (j-i)+1);
            j++;
        }
        return ans;
    }
};