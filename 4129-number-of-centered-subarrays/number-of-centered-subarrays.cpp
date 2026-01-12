class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            unordered_map<int, int> myMap;
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j];
                myMap[nums[j]]++;
                if(myMap.find(sum) != myMap.end()) {
                    ans++;
                }
            }
        }
        return ans;
    }
};