class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> myMap;
        int i = 0, j = 0, sum = 0, maxx = 0;
        for( ; j < nums.size(); j++) {
            myMap[nums[j]]++;
            sum += nums[j];
            while(myMap[nums[j]] > 1) {
                sum -= nums[i];
                myMap[nums[i]]--;
                i++;
            }
            maxx = max(maxx, sum);
        }
        return maxx;
    }
};