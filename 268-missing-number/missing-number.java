class Solution {
    public int missingNumber(int[] nums) {
        Map<Integer, Boolean> myMap = new HashMap<>();
        int n = nums.length;
        for(int i = 0; i < n; i++) {
            myMap.put(nums[i], true);
        }
        for(int i = 0; i <= n; i++) {
            if(!(myMap.containsKey(i))){
                return i;
            }
        }
        return -1;
    }
}