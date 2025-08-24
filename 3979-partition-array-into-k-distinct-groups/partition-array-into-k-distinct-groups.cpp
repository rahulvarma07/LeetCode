class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n % k != 0) return false;
        //if(n == 1 && k == 1) return true;
        unordered_map<int, int> myMap;
        int maxxFreq = 0, x = n/k;
        for(auto a: nums){
            myMap[a] ++;
            maxxFreq = max(maxxFreq, myMap[a]);
        }
        if(maxxFreq > x) return false;
        return true;
    }
};