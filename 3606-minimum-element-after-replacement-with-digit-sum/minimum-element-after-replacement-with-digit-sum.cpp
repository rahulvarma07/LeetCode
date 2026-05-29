class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            int n = nums[i];
            while(n > 0){
                sum += n%10;
                n /= 10;
            }
            ans = min(ans, sum);
        }
       return ans;
    }
};