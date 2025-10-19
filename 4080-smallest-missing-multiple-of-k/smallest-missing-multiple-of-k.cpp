class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int miss = k;
        unordered_map<int, bool> mp;
        for(auto a : nums) mp[a] = true;
        while(true){
            if(mp.find(miss) == mp.end()){
                return miss;
            }
            miss += k;
        }
        return miss;
    }
};