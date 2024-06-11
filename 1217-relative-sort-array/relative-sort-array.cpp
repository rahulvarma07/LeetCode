class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       map<int, int>nums;
       vector<int>ans;
       for(auto a:arr1){
        nums[a] += 1;
       } 
       for(int i = 0; i < arr2.size(); i++){
        int a = arr2[i];
        if(nums.find(a) != nums.end()){
            while(nums[a] --){
                ans.push_back(a);
            }
            if(nums[a] <= 0){
                nums.erase(a);
            }
        }
       }
       for(auto a:nums){
        while(a.second --){
            ans.push_back(a.first);
        }
       }
       return ans;
    }
};