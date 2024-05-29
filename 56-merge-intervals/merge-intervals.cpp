class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int>p = intervals[0];
        vector<vector<int>>ans;

        for(int i = 0 ; i < intervals.size(); i++)
        {
            if(intervals[i][0]  <=  p[1])
            {
                p[1] = max (intervals[i][1], p[1]);
            }
            else
            {
                ans.push_back(p);
                p = intervals[i];
            }
        }
        ans.push_back(p);
        return ans;
    }
};