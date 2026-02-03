class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> myMap = new HashMap<>();
        int []ans = new int[2];
        int n = nums.length;
        for(int i = 0; i < n; i++) {
            if(myMap.containsKey(target-nums[i])){
                ans[0] = myMap.get(target-nums[i]);
                ans[1] = i;
                return ans;
            }
            myMap.put(nums[i], i);
        }
        return ans;
    }
}