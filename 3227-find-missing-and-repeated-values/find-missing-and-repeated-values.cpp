class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int>HS(grid.size() * grid.size() +1);
       for(int i = 0; i < grid.size(); i++)
       {
           for(auto a:grid[i])
           {
              HS[a] += 1;
           }
       }  
       vector<int>ans(2, 0);
       for(int i = 1; i < HS.size(); i++)
       {
         if(HS[i] == 0) ans[1] = i;
         if(HS[i] == 2) ans[0] = i;
       }
       return ans;
    }
};