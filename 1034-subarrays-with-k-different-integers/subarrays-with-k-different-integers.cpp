class Solution {
public:
    int countLessThanK(vector<int>nums, int k){
        if(k == 0) return 0;
        unordered_map<int, int>check;
        int ans = 0, i = 0, j = 0;
        while(j < nums.size()){
            check[nums[j]]++;
            while(check.size() > k){
                check[nums[i]]--;
                if(check[nums[i]] == 0) check.erase(nums[i]);
                i++;
            }
            ans += (j-i)+1;
            j++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countLessThanK(nums, k)-countLessThanK(nums, k-1);
    }
};