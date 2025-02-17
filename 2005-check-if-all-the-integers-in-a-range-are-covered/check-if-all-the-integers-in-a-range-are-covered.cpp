class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>sweep(55, 0);
        for(int i = 0; i < ranges.size(); i++){
            int x = ranges[i][0], y = ranges[i][1];
            sweep[x]++;
            sweep[y+1]--;
        }
        for(int i = 1; i < sweep.size(); i++){
            sweep[i] += sweep[i-1];
        }
        for(int i = left; i <= right; i++){
            if(sweep[i] == 0) return false;
        }
        return true;
    }
};