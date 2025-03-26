class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int elem = nums[(nums.size())/2];
       int finalAns = 0;
       for(int i = 0; i < nums.size(); i++){
            finalAns += abs(nums[i]-elem);
       } 
       return finalAns;
    }
};