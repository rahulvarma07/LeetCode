class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(auto a: n){
            ans = max(ans, a-'0');
        }
        return ans;
    }
};