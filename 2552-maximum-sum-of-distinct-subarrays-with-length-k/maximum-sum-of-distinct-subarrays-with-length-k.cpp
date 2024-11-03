class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0,sum = 0;
        int i = 0, j = 0;
        unordered_map<int,int>check;
        for(; j < k; j++){
            sum += nums[j];
            check[nums[j]]++;
        }
        ans = (check.size() == k) ? sum : 0;
        while(j < nums.size()){
            sum -= nums[i];
            check[nums[i]]--;
            if(check[nums[i]] <= 0) check.erase(nums[i]);
            i++;
            sum += nums[j];
            check[nums[j]]++;
            ans = (check.size() == k) ? max(ans, sum) : ans;
            j++;
        }
        return ans;
    }
};