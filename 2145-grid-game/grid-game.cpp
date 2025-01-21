class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        vector<long long int> pref1(grid[0].size(), 0), pref2(grid[1].size(), 0);
        int n = grid.size(), m = grid[0].size();
        pref1[m-1] = grid[0][m-1];
        pref2[m-1] = grid[1][m-1];
        for(int j = m-2; j >= 0; j--){
            pref1[j] += pref1[j+1]+grid[0][j];
            pref2[j] += pref2[j+1]+grid[1][j];
        }  
        long long int pf = 0;
        int i = 0; 
        for(int j = 0; j < m; j++){
            pf += grid[1][j];
            if(j+1 < m && pref2[j] > pref1[j] && pf > pref1[j+1]){
                return max(pref1[j+1], pf-grid[1][j]);
            }
            if(j+1 < m && pf > pref1[j+1]){
                return max(pref1[j+1], pf-grid[1][j]);
            }
        }
        return pf-grid[1][m-1];
    }
};