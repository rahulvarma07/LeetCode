class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>ans;
        ans[0] = 1;
        int sum = 0 , count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int rem = sum - k;
            if(ans.find(rem) != ans.end()) count += ans[rem];
            ans[sum] += 1;
        }
        return count;
    }
};