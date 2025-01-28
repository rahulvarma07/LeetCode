class Solution {
public:
    void generateAllSubSets(int ind, vector<int>&store, vector<int>&nums, vector<vector<int>>&ans){
        if(ind >= nums.size()){
            ans.push_back(store);
            return;
        }
        store.push_back(nums[ind]);
        generateAllSubSets(ind+1, store, nums, ans);
        store.pop_back();
        generateAllSubSets(ind+1, store, nums, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // if(nums.size() == 0) return {};
        vector<vector<int>>ans;
        vector<int>store;
        int ind = 0;
        generateAllSubSets(ind, store, nums, ans);
        return ans;
    }
};