class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minn = INT_MAX;
        int maxx = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            minn = min(minn, sum);
            if(sum >= 0) sum = 0;
        }
        minn = min(minn, sum);
        sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            maxx = max(maxx, sum);
            if(sum <= 0) sum = 0;
        }
        maxx = max(maxx, sum);
        minn = abs(minn);
        return max(maxx, minn);
    }
};