class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int>check;
        int maxx = -1;
        for(int i = 0; i < nums.size(); i++){
            int s = 0, x = nums[i];
            while(x > 0){
                s += x%10;
                x /= 10;
            }
            if(check.find(s) == check.end()){
                check[s] = nums[i];
            }
            else{
                maxx = max(maxx, (nums[i]+check[s]));
                check[s] = max(nums[i], check[s]);
            }
        }
        return maxx;
    }
};