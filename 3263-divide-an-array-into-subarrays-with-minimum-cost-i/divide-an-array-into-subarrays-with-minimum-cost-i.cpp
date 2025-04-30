class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = INT_MAX;
        for(int j = 1; j < nums.size(); j++){
            for(int k = j+1; k < nums.size(); k++){
                int sum = nums[0]+nums[j]+nums[k];
                ans = min(ans, sum);
            }
        }
        return ans;
    }
};