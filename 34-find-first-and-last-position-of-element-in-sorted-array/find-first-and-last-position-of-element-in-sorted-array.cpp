class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        vector<int>ans(2,-1);
        int a = 0;
        int b = 0;
        while(left <= right){
            int mid = (right + left)/2;
            if(nums[mid] == target){
                    a = mid;
                    b = mid;
                    ans[0] = a;
                    ans[1] = b;
                    a -= 1;
                    b += 1;
                    while(a >= 0 and nums[a] == target){
                        ans[0] = a;
                        a -= 1;
                    }
                    while(b < nums.size() and nums[b] == target){
                        ans[1] = b;
                        b += 1;
                    }
                    break;
                }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        if(ans[0] != -1 and ans[1] == -1) ans[1] = ans[0];
        if(ans[1] != -1 and ans[0] == -1) ans[0] = ans[1];
        return ans;
    }
};