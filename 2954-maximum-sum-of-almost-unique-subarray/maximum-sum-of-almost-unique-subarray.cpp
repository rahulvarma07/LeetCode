class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        unordered_map<int, int>mp;
        int i = 0, j = 0;
        long long int ans = 0, sum = 0;
        for(; j < nums.size(); j++){
            sum += nums[j];
            mp[nums[j]]++;
            if(j+1 >= k){
                if(mp.size() >= m){
                    ans = max(ans, sum);
                }
                sum -= nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
        }
        return ans;
    }
};