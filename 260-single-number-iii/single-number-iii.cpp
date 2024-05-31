class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>ans;
        vector<int>ret;
        for(auto a: nums) ans[a] += 1;
        for(auto a: ans)
        {
            if(a.second == 1) ret.push_back(a.first);
        }
        return ret;
    }
};