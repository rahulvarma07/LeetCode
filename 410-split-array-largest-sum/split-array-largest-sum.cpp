class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int high = 0, low = -1;
        for(auto a: nums){
            high += a;
            low = max(low, a);
        }
        if(k == 1) return high;
        while(low <= high){
            int mid = (low + high)/2;
            int cnt = 1, sum = 0;
            for(int i = 0; i < nums.size(); i++){
                sum += nums[i];
                if(sum > mid){
                    sum = nums[i];
                    cnt++;
                }
            }
            if(cnt > k) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};