class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       int ans = -1;
       unordered_set<int> mySet;
       unordered_map<int, int> freq;
       for(int i = 0; i <= nums.size()-k; i++) {
            for(int j = i; j < i+k; j++) {
                if(freq.find(nums[j]) == freq.end()) {
                    freq[nums[j]] = i;
                }else {
                    if(freq[nums[j]] != i) {
                        mySet.insert(nums[j]);
                    }
                }
            } 
       }
       for(auto a: freq) {
            if(mySet.find(a.first) == mySet.end()) {
                ans = max(ans, a.first);
            }
       }
       return ans;
    }
};