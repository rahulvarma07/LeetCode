class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        int maxx = -1;
        unordered_map<int, int> freq;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += nums[i];
            freq[nums[i]] ++;
            while(freq[nums[i]] > 1){
                ans -= nums[j];
                freq[nums[j]]--;
                j++;
            }
            maxx = max(maxx, ans);
        }
        return maxx;
    }
};