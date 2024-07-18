class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans; 
       for(int i = 1; i <= numRows; i++){
          vector<int>p(i, 1);
          ans.push_back(p);
       }
       for(int i = 2; i < numRows; i++){
        for(int j = 1; j < ans[i].size()-1; j++){
            ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
        }
       }
       return ans;
    }
};