class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int maxx = -1, i = 0, j = 0, cnt = 0;
        while(j < nums.size()){
            if(nums[j] == 0) cnt++;
            while(cnt > 1){
                if(nums[i] == 0) cnt--;
                i++;
            }
            maxx = max(maxx, (j - i));
            j++;
        }
        return maxx;
    }
};