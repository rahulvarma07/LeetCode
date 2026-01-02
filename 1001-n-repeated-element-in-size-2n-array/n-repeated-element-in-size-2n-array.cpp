class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int, int> myMap;
        for(auto a : nums) {
            myMap[a]++;
            if(myMap[a] == n) return a;
        }
        return -1;
    }
};