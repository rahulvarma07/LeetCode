class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long> pref(nums.size());
        long long maxx = 0;
        for(int i = 0; i < nums.size(); i++) {
            maxx = max(maxx, (long long)nums[i]);
            pref[i] = gcd(nums[i], maxx);
        }
        long long int sum = 0;
        int i = 0, j = nums.size()-1;
        sort(pref.begin(), pref.end());
        while(i < j) {
            sum += gcd(pref[i], pref[j]);
            i++;
            j--;
        }
        return sum;
    }
};