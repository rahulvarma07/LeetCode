class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int minn = INT_MAX, maxx = INT_MIN;
        for(int a: nums){
            minn = min(minn, a);
            maxx = max(maxx, a);
        } 
        long long int ans = (long long int)(maxx - minn)*k;
        return ans;
    }
};