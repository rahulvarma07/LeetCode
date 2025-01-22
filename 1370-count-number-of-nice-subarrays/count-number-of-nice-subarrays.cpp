class Solution {
public:
    int countLessThanK(vector<int>nums, int k){
        if(k < 0) return 0;
        int oddCount = 0, ans = 0, i = 0, j = 0;
        while(j < nums.size()){
            if(nums[j]%2 != 0) oddCount++;
            while(oddCount > k){
                if(nums[i]%2 != 0) oddCount--;
                i++;
            }
            ans += (j-i)+1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countLessThanK(nums, k) - countLessThanK(nums, k-1);
    }
};