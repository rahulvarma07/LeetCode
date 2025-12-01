class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            int low = i+1, high = nums.size()-1;
            while(low <= high) {
                int mid = (low + high)/2;
                if(nums[mid] <= nums[i]) low = mid+1;
                else high = mid-1;
            }
            if(nums.size() - low >= k) ans++;
        }
        return ans;
    }
};