class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> myMap;
        while(n > 0) {
            int rem = n % 10;
            myMap[rem]++;
            n /= 10;
        }
        int res = 0;
        for(auto a: myMap) {
            res += (a.first * a.second);
        }
        return res;
    }
};