class Solution {
public:
    void generateSubSets(vector<int>nums, int &res, int ind, vector<int>p, int &ans){
        if(ind >= nums.size()){
            int x = 0;
            for(auto a:p) x|=a;
            if(x == res)ans++;
            return;
        }
        p.push_back(nums[ind]);
        generateSubSets(nums, res, ind+1, p, ans);
        p.pop_back();
        generateSubSets(nums, res, ind+1, p, ans);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int res = 0;
        for(auto a:nums) res |= a;
        vector<int>p;
        int ans = 0;
        generateSubSets(nums, res, 0, p, ans);
        return ans;
    }
};