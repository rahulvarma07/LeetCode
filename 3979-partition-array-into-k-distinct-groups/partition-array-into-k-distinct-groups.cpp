class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n % k != 0) return false;
        if(n == 1 && k == 1) return true;
        int maxxFreq = 0;
        unordered_map<int, int> freq;
        for(auto a: nums){
            freq[a]++;
            maxxFreq = max(maxxFreq, freq[a]);
        }
        if(maxxFreq > n/2) return false;
        int x = n / k;
        if(maxxFreq > x) return false;
        return true;
    }
};