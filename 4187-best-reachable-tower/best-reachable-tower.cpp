class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans(2, -1);
        int maxx = INT_MIN;
        for(auto a : towers) {
            int check = (abs(center[0] - a[0]) + abs(center[1] - a[1]));
            if(check <= radius) {
                if(a[2] > maxx) {
                    maxx = a[2];
                    ans[0] = a[0];
                    ans[1] = a[1];
                }else if(a[2] == maxx) {
                    if(ans[0] > a[0]) {
                        ans[0] = a[0];
                        ans[1] = a[1];
                    }else if(ans[0] == a[0]) {
                        ans[1] = min(ans[1], a[1]);
                    }
                }
            }
        }
        return ans;
    }
};