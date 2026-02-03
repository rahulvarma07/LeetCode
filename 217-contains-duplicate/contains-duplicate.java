class Solution {
    public boolean containsDuplicate(int[] nums) {
       Map<Integer, Integer> myMap = new HashMap<>();
       int n = nums.length;
       for(int i = 0; i < n; i++) {
            myMap.put(nums[i], myMap.getOrDefault(nums[i], 0)+1);
            if(myMap.get(nums[i]) > 1){
                return true;
            }
       }
       //System.out.print(myMap.toString());
       return false;
    }
}