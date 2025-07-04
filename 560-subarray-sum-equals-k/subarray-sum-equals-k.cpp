class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, ans = 0;
        unordered_map<int, int> check;
        check[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int rem = sum-k;
            if(check.find(rem) != check.end()){
                ans += check[rem];
            }
            check[sum]++;
        }
        return ans;
    }
};