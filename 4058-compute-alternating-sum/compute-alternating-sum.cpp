class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i%2 == 0) sum1 += nums[i];
            else sum2 += nums[i];
        }
        return sum1-sum2;
    }
};