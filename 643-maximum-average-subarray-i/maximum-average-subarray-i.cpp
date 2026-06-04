class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxx = 0;
        int ans = 0;
        int i = 0, j = 0;
        for(; j < k; j++) {
            ans += nums[j];
        }
        maxx = (ans/(k*1.0));
        for(j = k; j < nums.size(); j++) {
            ans -= nums[i];
            ans += nums[j];
            maxx = max(maxx, (ans/(k*1.0)));
            i++;
        }
        return maxx;
    }
};