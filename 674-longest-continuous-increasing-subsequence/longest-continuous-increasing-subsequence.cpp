class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt = 1, elem = nums[0], maxx = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > elem){
                cnt++;
            }
            else{
                maxx = max(maxx, cnt);
                cnt = 1;
            }
            elem = nums[i];
        }
        maxx = max(maxx, cnt);
        return maxx;
    }
};