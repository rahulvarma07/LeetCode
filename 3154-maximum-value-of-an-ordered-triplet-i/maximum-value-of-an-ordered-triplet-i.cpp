class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size()-2; i++){
            for(int j = i+1; j < nums.size()-1; j++){
                for(int k = j+1; k < nums.size(); k++){
                    long long calc = (nums[i]-nums[j]);
                    calc *= nums[k];
                    ans = max(ans, calc);
                }
            }
        }
        return ans;
    }
};