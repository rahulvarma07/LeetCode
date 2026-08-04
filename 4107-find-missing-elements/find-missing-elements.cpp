class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minn = nums[0], maxx = nums[0];
        unordered_set<int> mySet;
        vector<int> ans;
        for(auto a: nums) {
            mySet.insert(a);
            minn = min(minn, a);
            maxx = max(maxx, a);
        }
        for(int i = minn+1; i < maxx; i++) {
            if(mySet.count(i) == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};