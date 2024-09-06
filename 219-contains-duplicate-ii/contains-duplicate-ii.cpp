class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>mymap;
        mymap[nums[0]] = 0;
        for(int i = 1; i < nums.size(); i++){
            if(mymap.find(nums[i]) != mymap.end()){
                if(abs(i - mymap[nums[i]]) <= k) return true;
            }
            mymap[nums[i]] = i;
        }
        return false;
    }
};