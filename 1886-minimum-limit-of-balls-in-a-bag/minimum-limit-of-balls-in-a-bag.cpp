class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = low + (high-low)/2;
            long long int cnt = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] <= mid) continue;
                cnt += (nums[i]/mid)-1;
                if(nums[i]%mid != 0) cnt++;
            } 
            if(cnt <= maxOperations) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};