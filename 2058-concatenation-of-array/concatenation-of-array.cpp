class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
// nums -> [1, 2, 1]
//          0  1  2
// ans -> [1, 2, 1, 1, 2, 1]
//         0   1  2 3 4  5
        int n = nums.size();
        vector<int> ans(2*n, 0);
        for(int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i+n]= nums[i];
        }
        return ans;
    }
};