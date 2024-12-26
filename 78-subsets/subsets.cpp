class Solution {
public:

    void generateSubSets(vector<int>nums, vector<int>p, vector<vector<int>>&ans, int ind){
        if(ind >= nums.size()){
            ans.push_back(p);
            return;
        }
        p.push_back(nums[ind]);
        generateSubSets(nums, p, ans, ind+1);
        p.pop_back();
        generateSubSets(nums, p, ans, ind+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>push;
        generateSubSets(nums, push, ans, 0);
        return ans;
    }
};