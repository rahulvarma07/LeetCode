class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*
        Kadane's Algorithm
        1. take a sum which adds the elemnt's of the Array
        2. check for the Below Conditio
           if(Your sum Sum < "0") 
           {
            the initialize the sum to 0 
           }
        3. Everytime update the ans by taking the max element of the sum;
        */
        int ans = INT_MIN;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
            sum += nums[i];
            ans = max(ans, sum);
            if(sum < 0) sum =0 ;
        }
        return ans;
    }
};