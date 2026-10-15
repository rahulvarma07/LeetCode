class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int> mySet;
            for(int j = i; j < nums.size(); j++){
               mySet.insert(nums[j]);
               ans = ans + (mySet.size() * mySet.size());
            }
        }
        return ans;
    }
};