class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long int sum = 0;
        for(auto a: nums){
            sum += a;
        }
        if(sum <= threshold) return 1;
        long long int low = 1, high = sum;
        while(low <= high){
            long long int mid = (low + high)/2;
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