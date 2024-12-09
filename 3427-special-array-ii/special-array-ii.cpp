class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>check(nums.size(), 0);
        check[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]%2 != nums[i-1]%2){
                check[i] = check[i-1];
            }
            else{
                check[i] = check[i-1]+1;
            }
        }
        vector<bool>ans(queries.size(), true);
        for(int i = 0; i < queries.size(); i++){
            int a = queries[i][0];
            int b = queries[i][1];
            if(check[b]-check[a] > 0){
                ans[i] = false;
            }
        }
        return ans;
    }
};