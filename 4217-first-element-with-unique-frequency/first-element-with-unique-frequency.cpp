class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> myMap;
        unordered_map<int, int> freqMap;
        for(auto a: nums) {
            myMap[a]++;
        }
        for(auto a: myMap){
            freqMap[a.second]++;
        }
        for(auto a: nums){
            if(freqMap[myMap[a]] == 1){
                return a;
            }
        }
        return -1;
    }
};