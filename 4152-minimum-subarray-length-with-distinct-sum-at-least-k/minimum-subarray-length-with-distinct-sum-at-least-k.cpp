class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int ans = INT_MAX, i = 0, j = 0, sum = 0;
        unordered_map<int, int> myMap;
        while(j < nums.size()) {
            myMap[nums[j]]++;
            if(myMap[nums[j]] == 1) sum += nums[j];
            while(sum >= k && i <= j) {
                ans = min(ans, (j -i)+1);
                if(myMap[nums[i]] == 1){
                    sum -= nums[i];
                }
                myMap[nums[i]]--;
                i++;
            }
            j++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};