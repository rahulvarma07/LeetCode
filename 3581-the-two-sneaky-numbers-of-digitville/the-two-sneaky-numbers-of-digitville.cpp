class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> table(nums.size(), 0);
        vector<int> ans;
        for(auto a: nums) {
            table[a]++;
            if(table[a] > 1) ans.push_back(a);
        }
        return ans; 
    }
};