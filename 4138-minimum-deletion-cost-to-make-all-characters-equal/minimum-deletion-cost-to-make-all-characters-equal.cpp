class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        map<char, long long int> myMap;
        long long int maxx = -1;
        for(int i = 0; i < s.size(); i++) {
            myMap[s[i]] += cost[i];
            maxx = max(maxx, myMap[s[i]]);
        }
        bool isTrue = true;
        long long int ans = 0;
        for(auto a: myMap) {
            if(isTrue && a.second == maxx) {
                isTrue = false;
            }else {
                ans += a.second;
            }
        }
        return ans;
    }
};