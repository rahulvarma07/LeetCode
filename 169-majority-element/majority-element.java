class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int reqCount = n/2;
        Map<Integer, Integer> myMap = new HashMap<>();
        for(int i = 0; i < n; i++) {
            myMap.put(nums[i], myMap.getOrDefault(nums[i], 0)+1);
            if(myMap.get(nums[i]) > reqCount) {
                return nums[i];
            }
        }
        return -1;
    }
}