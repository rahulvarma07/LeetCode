class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>check(nums.size(), 0);
        for(int i = 0; i < queries.size(); i++){
            int x = queries[i][0], y = queries[i][1];
            check[x] -= 1;
            if(y+1 < nums.size()){
                check[y+1] += 1;
            }
        }
        long long int sum = 0;
        for(int i = 0; i < nums.size();i++){
            sum += check[i];
            nums[i] += sum;
            if(nums[i] > 0) return false;
        }
        return true;
    }
};