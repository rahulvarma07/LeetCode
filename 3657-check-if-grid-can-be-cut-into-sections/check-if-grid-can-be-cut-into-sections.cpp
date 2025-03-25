class Solution {
public:
    bool funcMerge(vector<vector<int>>points){
        sort(points.begin(), points.end());
        vector<int>p = points[0];
        vector<vector<int>>ans;
        for(int i = 1; i < points.size(); i++){
            if(p[1] > points[i][0]){
                p[1] = max(p[1], points[i][1]);
            }
            else{
                ans.push_back(p);
                p = points[i];
            }
        }
        ans.push_back(p);
        return (ans.size() > 2);
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>>p1;
        vector<vector<int>>p2;
        for(int i = 0; i < rectangles.size(); i++){
            p1.push_back({rectangles[i][0], rectangles[i][2]});
            p2.push_back({rectangles[i][1], rectangles[i][3]});
        }
        return (funcMerge(p1) || funcMerge(p2));
    }
};