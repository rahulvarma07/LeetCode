class Solution {
public:
    int countLessThanK(vector<int>nums, int k){
        if(k < 0) return 0;
        int sum = 0, i = 0, j = 0, ans = 0;
        while(j < nums.size()){
            sum += nums[j];
            while(sum > k){
                sum -= nums[i];
                i++;
            }
            ans += (j - i)+1;
            j++;
        }
        return ans; 
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countLessThanK(nums, goal)-countLessThanK(nums, goal-1);
    }
};