class Solution {
    public int majorityElement(int[] nums) {
        int ans = nums[0];
        int cnt = 1;
        for(int i = 1; i < nums.length; i++){
            if(nums[i] == ans){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt == 0){
                ans = nums[i];
                cnt = 1;
            }
        }
        return ans;
    }
}