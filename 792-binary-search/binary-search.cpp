class Solution {
public:
    int BinSer(vector<int>nums, int target, int l, int h){
        if(l > h) return -1;
        int mid = (h + l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target){
            return BinSer(nums, target, l , mid - 1);
        }
        else{
            return BinSer(nums, target,mid+1, h);
        }
    }
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int ans = BinSer(nums, target, low, high);
        return ans;
    }
};