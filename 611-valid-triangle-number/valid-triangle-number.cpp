class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0, n = nums.size();
        if(n < 3) return ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                int sum = nums[i]+nums[j];
                int low = j+1, high = n-1;
                while(low <= high){
                    int mid = (low + high)/2;
                    if(nums[mid] < sum){
                        low = mid+1;
                    }else{
                        high = mid-1;
                    }
                }
                ans += (high - j);
            }
        }
        return ans;
    }
};