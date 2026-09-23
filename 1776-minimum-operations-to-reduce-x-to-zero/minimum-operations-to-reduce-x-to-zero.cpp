class Solution {
public:
    int bs(vector<int> &pref, vector<int> &suff, int target) {
        int ans = INT_MAX;
        // {1, 1, 4, 2, 3} 
        // {1, 2, 6, 8, 11} i = 0
        // {3, 5, 9, 10, 11} l = 0, h = 5 - 2 - 0
        for (int i = 0; i < pref.size(); i++) {
            int l = 0;
            int h = suff.size() - 2 - i;
            while (l <= h) {
                int m = l + (h - l) / 2;
                int sum = pref[i] + suff[m];
                if (sum == target) {
                    ans = min(ans, i + m + 2);
                    break;
                }
                else if (sum > target) {
                    h = m-1;
                }
                else {
                    l = m+1;
                }
            }
        }
        return ans;
    }
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        vector<int> pref(n, 0), suff(n, 0);
        int ans1 = INT_MAX, ans2 = INT_MAX;
        for(int i = 0; i < n; i++) {
            pref[i] = (i == 0 ? nums[i] : nums[i] + pref[i-1]);
            if(pref[i] == x) {
                ans1 = min(ans1, i+1);
            }
        }
        for(int i = n-1; i >= 0; i--) {
            suff[i] = (i == n-1 ? nums[i] : nums[i] + suff[i+1]);
            if(suff[i] == x) {
                ans2 = min(ans2, n-i);
            }
        }
        reverse(suff.begin(), suff.end());
        cout << bs(pref, suff, x);
        int ans =  min({bs(pref, suff, x), ans1, ans2});
        return (ans == INT_MAX ? -1 : ans);
    }
};