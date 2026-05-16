class Solution {
public:
    int findMin(vector<int>& nums) {
        int minn = INT_MAX;
        for(auto a: nums) minn = min(minn, a);
        return minn;
    }
};