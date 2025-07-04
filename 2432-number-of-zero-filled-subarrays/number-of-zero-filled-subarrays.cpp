#define ll long long int
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0;
        ll cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) cnt++;
            else{
                ll sum = (cnt * (cnt + 1)/2);
                ans = ans + sum;
                cnt = 0;
            }
        }
        ll sum = (cnt*(cnt + 1)/2);
        ans = ans + sum;
        return ans;
    }
};