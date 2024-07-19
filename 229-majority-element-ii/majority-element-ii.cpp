class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>freq_map;
       vector<int>ans;
       int check = nums.size()/3;
       for(int i = 0; i < nums.size(); i++){
        freq_map[nums[i]] += 1;
        if(freq_map[nums[i]] > check){
            if(ans.size() == 0 || ans.back() != nums[i]){
                ans.push_back(nums[i]);
            }
            if(ans.size() == 2)break;
        }
       } 
       return ans;
    }
};