class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        // 1 2 3 4 5 6 7 8 9 10
        // *       *
        //   * *
        // *                  *
        //          *         *
        //            *  *

        map<int, int>meet;
        for(int i = 0; i < intervals.size(); i++){
            int x = intervals[i][0], y = intervals[i][1];
            meet[x]++;
            meet[y+1]--;
        }
        int sum = 0;
        int ans = 0;
        for(auto a:meet){
            sum += a.second;
            ans = max(ans, sum);
        }
        return ans;
    }
};