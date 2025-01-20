class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zc = 0;
        int i = 0, j = 0, ans = -1;
        for(; j < nums.size(); j++){
            if(nums[j] == 0) zc++;
            while(zc > k){
                if(nums[i] == 0) zc--;
                i++;
            }
            ans = max(ans, (j-i)+1);
        }
        return ans;
    }
};