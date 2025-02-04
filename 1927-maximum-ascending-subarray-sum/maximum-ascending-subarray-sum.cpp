class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxx = 0;
        int sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                sum += nums[i];
            }
            else{
                maxx = max(maxx, sum);
                sum = nums[i];
            }
        }
        maxx = max(maxx, sum);
        return maxx;
    }
};