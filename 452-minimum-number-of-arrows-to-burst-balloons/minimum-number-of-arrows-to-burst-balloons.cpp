class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int ans = 1;
        vector<int> ballon = points[0];
        for(int i = 1; i < points.size(); i++) {
            if(ballon[1] >= points[i][0]) {
                ballon[1] = min(ballon[1], points[i][1]);
            }else{
                ans++;
                ballon = points[i];
            }
        }
        return ans;
    }
};