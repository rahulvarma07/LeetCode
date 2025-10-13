class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool isTrue = true;
        int xr = 0;
        for(auto a: nums){
            xr ^= a;
            if(a != 0) isTrue = false;
        }
        if(isTrue) return 0;
        else if(xr == 0) return nums.size()-1;
        else return nums.size();
    }
};