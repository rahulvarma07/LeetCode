class Solution {
    public int majorityElement(int[] nums) {
        int reqCount = nums.length/2;
        int n = nums.length;
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