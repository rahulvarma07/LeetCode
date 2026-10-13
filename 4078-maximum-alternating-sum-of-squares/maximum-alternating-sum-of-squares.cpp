class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // big small big small
        for(int i = 0; i < nums.size(); i++) nums[i] = nums[i]*nums[i];
        sort(nums.begin(), nums.end());
        long long int sum = 0;
        int i = 0, j = nums.size()-1;
        while(i <= j) {
            if(i == j) {
                sum = sum + nums[i];
                i++;
            }else {
                sum = sum + nums[j];
                sum = sum - nums[i];
                i++;
                j--;
            }
        }
        return sum;
    }
};