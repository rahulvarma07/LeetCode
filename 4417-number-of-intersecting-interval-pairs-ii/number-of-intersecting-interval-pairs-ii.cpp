class Solution {
public:
    int bs(int strt, int end, vector<vector<int>>&intervals, int l, int h) {
        while(l <= h) {
            int m = l + (h - l)/2;
            if(intervals[m][0] >= strt && intervals[m][0] <= end) {
                l = m+1;
            }else h = m-1;
        }
        return h;
    }
    
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        long long int ans = 0;
        for(int i = 0; i < intervals.size(); i++) {
            int strt = intervals[i][0], end = intervals[i][1];
            int l = i+1, h = intervals.size()-1;
            int b = bs(strt, end, intervals, l, h);
            if(b <= i) continue;
            ans = ans + (b - i);
        }
        return ans;
    }
};