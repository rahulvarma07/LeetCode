class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long int gp = 0;
         long long int agp = 0;
        unordered_map<int, int>check;
        for(int i = 0; i < nums.size(); i++){
            int target = nums[i]-i;
            if(check.find(target) != check.end()){
                gp += check[target];
            }
            check[target]++;
            agp += i;
        }      
        int n = nums.size()-1;
        return agp-gp;
    }
};