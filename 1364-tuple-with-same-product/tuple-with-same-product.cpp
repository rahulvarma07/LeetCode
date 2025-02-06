class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
       unordered_map<int, int>prod;
       for(int i = 0; i < nums.size(); i++){
          for(int j = i+1; j < nums.size(); j++){
            int p = nums[i]*nums[j];
            prod[p]++;
          }
       }
       int ans = 0;
       for(auto a: prod){
          ans += ((4*(a.second-1))*(a.second));
       }
       return ans;
    }
};