class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> mySet;
        for(int i = 0; i < n; i++){
            if(mySet.find(nums[i]) != mySet.end()){
                return true;
            }
            mySet.insert(nums[i]);
        }
        return false;
    }
};