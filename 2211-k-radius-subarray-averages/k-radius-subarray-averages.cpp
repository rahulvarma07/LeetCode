class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0) return nums;
        vector<int>ans(nums.size(), -1);
        if(k > nums.size()) return ans;
        int t = k*2, i = 0, j = 0;
        if(t >= nums.size()) return ans;
        long long int sum = 0;
        for(; j <= t; j++) sum += nums[j];
        j--;
        while(j < nums.size()){
            ans[k] = sum/(t+1);
            k++;
            sum -= nums[i];
            i++;
            j++;
            if(j < nums.size())sum += nums[j];
        }
        return ans;
    }
};