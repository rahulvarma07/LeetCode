class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == k) continue;
            else if(nums[i] < k) return -1;
            else if(nums[i] > k) ans++;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == nums[i]) nums[j] = k;
            }
        }
        return ans;
    }
};