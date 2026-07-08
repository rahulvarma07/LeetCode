class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int num = nums[i];
            int dc = 0;
            while(num != 0) {
                dc++;
                num /= 10;
            }
            if(dc % 2 == 0) {
                ans++;
            }
        }
        return ans;
        // O(NlogM)
    }
};