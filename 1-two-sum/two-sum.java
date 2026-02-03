class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        int []ans = new int[2];
        Map<Integer, Integer> myMap = new HashMap<>();
        for(int i = 0; i < n; i++) {
            int f = target-nums[i]; // 2
            if(myMap.containsKey(f)) {
                ans[0] = myMap.get(f);
                ans[1] = i;
                return ans;
            }
            myMap.put(nums[i], i);
        }
        return ans;
    }
}