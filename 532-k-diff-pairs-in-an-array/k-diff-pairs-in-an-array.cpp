class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size() == 1) return 0;
        sort(nums.begin(), nums.end());
        unordered_map<int, int>check;
        set<pair<int,int>> res;
        for(int i = 0; i < nums.size(); i++){
            int rem = nums[i] - k;
            if(check.find(rem) != check.end()){
                res.insert({rem, nums[i]});
            }
            check[nums[i]]++;
        }
        return res.size();
    }
};