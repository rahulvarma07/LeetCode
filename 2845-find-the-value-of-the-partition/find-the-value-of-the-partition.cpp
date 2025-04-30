class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minn = INT_MAX;
        for(int i = 1; i < nums.size(); i++){
            minn = min(minn, nums[i]-nums[i-1]);
        }
        return minn;
    }
};