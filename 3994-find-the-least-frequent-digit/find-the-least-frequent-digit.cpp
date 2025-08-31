class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> myMap;
        int minn = INT_MAX;
        while(n > 0){
            int x = n%10;
            myMap[x]++;
            n /= 10;
        }
        int ans = INT_MAX;
        for(auto a: myMap){
            minn = min(minn, a.second);
        }
        for(auto a: myMap){
            if(a.second == minn){
                ans = min(ans, a.first);
            }
        }
        return ans;
    }
};