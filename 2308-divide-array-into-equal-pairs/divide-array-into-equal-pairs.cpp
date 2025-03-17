class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int>check;
        for(auto a: nums){
            check[a]++;
        }
        for(auto a:check){
            if(a.second%2){
                return false;
            }
        }
        return true;
    }
};