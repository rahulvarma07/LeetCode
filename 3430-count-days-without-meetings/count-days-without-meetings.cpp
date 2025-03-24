class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<vector<int>>ans;
        vector<int>p = meetings[0];
        int i = 0; int j = 1;
        int x = 1;
        while(x < meetings.size())
        {
            if(meetings[x][0] <= p[1])
            {
                p[1] = max(p[1], meetings[x][1]);
            }
            else
            {
                ans.push_back(p);
                p = meetings[x];
            }
            x += 1;
        }
        ans.push_back(p);
        int count = 0;
        for(int i = 0; i < ans.size(); i++)
        {
            count += (ans[i][1] - ans[i][0]) + 1;
        }
        return (days - count);
    }
};