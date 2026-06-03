class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();
        vector<int> land(n, 0);
        for(int i =0; i < n; i++) land[i] = landStartTime[i] + landDuration[i];
        vector<int> water(m, 0);
        for(int i = 0; i < m; i++) water[i] = waterStartTime[i] + waterDuration[i];
        sort(land.begin(), land.end());
        sort(water.begin(), water.end());
        for(auto a: land){
            for(int i = 0; i < m; i++){
                if(a >= waterStartTime[i]){
                    ans = min(ans, a + waterDuration[i]);
                }
                else{
                    ans = min(ans, a + (waterStartTime[i]-a)+waterDuration[i]);
                }
            }
        }
        for(auto a: water){
            for(int i = 0; i < n; i++){
                if(a >= landStartTime[i]){
                    ans = min(ans, a + landDuration[i]);
                }
                else{
                    ans = min(ans, a + (landStartTime[i]-a)+landDuration[i]);
                }
            }
        }
        return ans;
    }
};