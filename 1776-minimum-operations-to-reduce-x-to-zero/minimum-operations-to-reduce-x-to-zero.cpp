class Solution {
public:
    int sum(vector<int>& nums) {
        int ans = 0;
        for(auto &a: nums) ans += a;
        return ans;
    }
    int minOperations(vector<int>& nums, int x) {
        int totalSum = sum(nums), n = nums.size();
        if(totalSum < x) return -1;
        if(totalSum == x) return n;
        int findLen = totalSum - x;
        int s = 0, i = 0;
        int maxxLen = -1;
        for(int j = 0; j < n; j++) {
            s += nums[j];
            while(s > findLen) {
                s -= nums[i];
                i++;
            }
            if(s == findLen) {
                maxxLen = max(maxxLen, (j-i)+1);
            }
        }
        if(maxxLen == -1) return -1;
        return n - maxxLen;
    }
};