class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int end = n-1;
        vector<int> ans(n,0);
        for(auto a: nums) {
            if(a%2 == 1) {
                ans[end] = 1;
                end--;
            }
        }
        return ans;
    }
};