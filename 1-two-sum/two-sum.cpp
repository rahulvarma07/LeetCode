class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for(int i = 0; i < nums.size(); i++) {
            int f = target-nums[i];
            if(myMap.find(f) != myMap.end()) {
                return {myMap[f], i};
            }
            myMap[nums[i]] = i;
        }
        return {};
    }
};