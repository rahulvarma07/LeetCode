class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long sum = 0;
        int i = 0;
        for(int j = 0; j < k; j++) {
            sum += nums[j];
            freq[nums[j]]++;
        }
        long long ans = (freq.size() == k ? sum : 0);
        for(int j = k; j < nums.size(); j++) {
            sum -= nums[i];
            freq[nums[i]]--;
            if(freq[nums[i]] == 0) freq.erase(nums[i]);
            sum += nums[j];
            freq[nums[j]]++;
            if(freq.size() == k) {
                ans = max(ans, sum);
            }
            i++;
        }
        return ans;
    }
};