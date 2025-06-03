class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        vector<vector<int>>ans;
        for(int i = 0; i <= grid.size()-k; i++){
            vector<int>p1;
            for(int j = 0; j <= grid[i].size()-k; j++){
                vector<int>p2;
                for(int x = i; x < i+k; x++){
                    for(int y = j; y < j+k; y++){
                        p2.push_back(grid[x][y]);
                    }
                }
                sort(p2.begin(), p2.end());
                int minn = INT_MAX;
                for(int x = 1; x < p2.size(); x++){
                    if(p2[x] != p2[x-1]){
                        minn = min(minn, abs(p2[x]-p2[x-1]));
                    }
                }
                minn == INT_MAX ? p1.push_back(0) : p1.push_back(minn);
            }
            ans.push_back(p1);
        }
        return ans;
    }
};