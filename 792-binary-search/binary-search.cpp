class Solution {
public:
    int BS(vector<int>nums, int k, int l, int r){
        if(l > r){
            return - 1;
        }

        int mid = (r + l)/2;
        if(nums[mid] == k) return mid;

        else if(nums[mid] > k){
            return BS(nums, k, l, mid -1);
        }

        else{
            return BS(nums, k, mid + 1, r);
        }
    }
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        int ans = BS(nums, target, l, r);
        return ans;
    }
};