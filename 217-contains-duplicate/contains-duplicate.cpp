class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> mySet;
        for(int i = 0; i < n; i++){
            mySet.insert(nums[i]);
        }
        return (n != mySet.size());
    }
};