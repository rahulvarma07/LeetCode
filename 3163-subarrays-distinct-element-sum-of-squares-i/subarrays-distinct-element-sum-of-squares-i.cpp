class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp.clear();
            for(int j = i; j < nums.size(); j++){
                mp[nums[j]]++;
                ans += (mp.size() * mp.size());
            }
        }
        return ans;
    }
};