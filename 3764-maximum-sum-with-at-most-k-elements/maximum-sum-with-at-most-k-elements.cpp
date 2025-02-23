class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        long long int ans = 0;
        priority_queue<int>finalpq;
        priority_queue<int>pq;
        for(int i = 0; i < grid.size(); i++){
            int x = limits[i];
            for(int j = 0; j < grid[i].size(); j++){
                pq.push(grid[i][j]);
            }
            while(x-- && !pq.empty()){
                finalpq.push(pq.top());
                pq.pop();
            }
            while(!pq.empty()){
                pq.pop();
            }
        }
        while(k--){
            ans += finalpq.top();
            finalpq.pop();
        }
        return ans;
    }
};