class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int sum = -1;
        for(auto a: nums){
            sum = max(sum, a);
        }
        int low = 1, high = sum;
        while(low <= high){
            int mid = (low + high)/2;
            int sum  = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i]%mid != 0){
                    sum += (nums[i]/mid);
                    sum++;
                }
                else{
                    sum += (nums[i]/mid);
                }
            }
            if(sum > threshold) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
};