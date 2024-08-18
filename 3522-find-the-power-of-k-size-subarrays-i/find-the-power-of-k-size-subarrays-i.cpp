class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(nums.size() == 1)return nums;
        vector<int>ans;
        for(int i = 0; i < nums.size()-k+1; i++){
            bool istrue = true;
            for(int j = i+1; j < i+k; j++){
                if(nums[j] == nums[j-1] || nums[j-1] > nums[j] || nums[j]-1 != nums[j-1]){
                    istrue = false;
                    break;
                }
            }
            if(istrue) ans.push_back(nums[i+k-1]);
            else ans.push_back(-1);
        }
        return ans;
    }
};