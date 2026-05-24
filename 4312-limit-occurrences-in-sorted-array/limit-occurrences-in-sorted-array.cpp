class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(auto a: nums) {
            if(freq[a] < k) freq[a]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(freq[nums[i]] > 0) {
                ans.push_back(nums[i]);
                freq[nums[i]]--;
            }
        }
        return ans;
    }
};