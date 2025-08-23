class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > jump) return false;
            jump = max(jump, nums[i]+i);
        }
        return true;
    }
};