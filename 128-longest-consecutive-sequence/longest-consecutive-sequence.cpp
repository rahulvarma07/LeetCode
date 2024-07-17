class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)return 0;
        int cnt = 1; 
        int len = 1;
        int elem = nums[0];
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(nums[i]-1 == elem){
                cnt += 1;
                elem = nums[i];
            }
            else if(nums[i] != elem){
                elem = nums[i];
                cnt = 1;
            }
            len = max(len, cnt);
        }
        return len;
    }
};