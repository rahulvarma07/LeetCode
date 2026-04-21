class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> suffMin(nums.size(), 0);
        int prefMaxx = 0;
        for(int i = nums.size()-1; i >= 0; i--) {
            if(i == nums.size()-1) suffMin[i] = nums[i];
            else suffMin[i] = min(suffMin[i+1], nums[i]);
        }
        for(int i = 0; i < nums.size(); i++) {
            prefMaxx = max(prefMaxx, nums[i]);
            int check = prefMaxx-suffMin[i];
            if(check <= k) return i;
        }
        return -1;
    }
};