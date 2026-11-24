class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        int m = 1e9 + 7;
        for(int i = 0; i < nums.size(); i++) {
            long long int p = nums[i], l = nums[i], g = nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                p = ((p % m) * (nums[j] % m)) % m;
                l = lcm(l, nums[j]);
                g = gcd(g, nums[j]);
                if(p == l * g) ans = max(ans, (j - i)+1);
            }
        }
        return ans;
    }
};