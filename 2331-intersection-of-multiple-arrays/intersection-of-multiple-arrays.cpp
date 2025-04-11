class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int>check;
        for(int i = 0; i < nums.size(); i++){
            for(auto a:nums[i]){
                check[a]++;
            }
        }
        vector<int>ans;
        for(auto a:check){
            if(a.second == nums.size()){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};