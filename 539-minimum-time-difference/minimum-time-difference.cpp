class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>timeDiff(timePoints.size(), 0);
        int ans = INT_MAX;
        for(int i = 0; i < timePoints.size(); i++){
            int min = ((timePoints[i][3]- '0')*10)+(timePoints[i][4]-'0');
            int hou = ((timePoints[i][0]-'0')*10)+(timePoints[i][1]-'0');
            int total = (hou*60 + min);
            timeDiff[i] = total;
        }
        sort(timeDiff.begin(), timeDiff.end());
        for(int i = 0; i < timeDiff.size()-1; i++) ans = min(ans, timeDiff[i+1]-timeDiff[i]);
        ans = min(ans, timeDiff[0]+1440 - timeDiff[timeDiff.size()-1]);
        return ans;
    }
};