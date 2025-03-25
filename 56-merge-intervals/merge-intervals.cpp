class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        vector<int>p = points[0];
        vector<vector<int>>ans;
        for(int i = 1; i < points.size(); i++){
            if(p[1] >= points[i][0]){
                p[1] = max(p[1], points[i][1]);
            }
            else{
                ans.push_back(p);
                p = points[i];
            }
        }
        ans.push_back(p);
        return ans;
    }
};