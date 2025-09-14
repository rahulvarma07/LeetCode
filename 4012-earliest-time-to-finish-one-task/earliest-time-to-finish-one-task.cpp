class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for(auto a: tasks){
            ans = min(ans, (a[0]+a[1]));
        }
        return ans;
    }
};