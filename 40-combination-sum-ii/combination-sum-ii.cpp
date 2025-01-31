class Solution {
public:
    void compute(int i, int sum, int target, vector<vector<int>>&ans, vector<int>&store, vector<int>&can){
        if(i == can.size()){
            if(sum == target){
                ans.push_back(store);
            }
            return;
        }
        if(sum == target){
            ans.push_back(store);
            return;
        }
        if(sum+can[i] > target) return;
        store.push_back(can[i]);
        sum += can[i];
        compute(i+1, sum, target, ans, store, can);
        store.pop_back();
        sum -= can[i];
        while(i+1 < can.size() && can[i] == can[i+1])i++;
        compute(i+1, sum, target, ans, store, can);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>store;
        int i = 0;
        int sum = 0;
        compute(i, sum, target, ans, store, candidates);
        return ans;
    }
};