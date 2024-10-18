class Solution {
public:
    void generateSubSets(vector<vector<int>>&sub, vector<int>p,vector<int>&nums,int ind = 0){
        if(ind >= nums.size()){
            if(p.size() != 0)sub.push_back(p);
            return;
        }
        p.push_back(nums[ind]);
        generateSubSets(sub, p, nums, ind+1);
        p.pop_back();
        generateSubSets(sub, p, nums, ind+1);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>push;
        int i = 0, ans = 0, maxx = INT_MIN;
        generateSubSets(res, push, nums, i);
        for(auto a: res){
            int x = 0;
            for(auto b:a){
                x |= b;
            }
            maxx = max(maxx, x);
        }
        for(int i = 0; i < res.size(); i++){
            int x = 0;
            for(int j = 0; j < res[i].size(); j++){
                x  |= res[i][j];
            }
            if(x == maxx) ans++;
        }
        return ans;
    }
};