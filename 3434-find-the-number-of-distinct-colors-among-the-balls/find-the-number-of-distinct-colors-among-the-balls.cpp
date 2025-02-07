class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int>balls;
        unordered_map<int, int>color;
        vector<int>ans(queries.size(), 0);
        for(int i = 0; i < queries.size(); i++){
            int x = queries[i][0];
            int y = queries[i][1];
            if(balls.find(x) == balls.end()){
                balls[x] = y;
                color[y]++;
            }
            else if(balls.find(x) != balls.end()){
                color[balls[x]]--;
                if(color[balls[x]] == 0) color.erase(balls[x]);
                balls[x] = y;
                color[y]++;
            }
            ans[i] = color.size();
        }
        return ans;
    }
};