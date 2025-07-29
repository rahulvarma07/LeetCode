class Solution {
public:

    void dfs(vector<vector<int>>& points, vector<bool> &vis, int node){
        if(vis[node]) return;
        vis[node] = true;
        for(int i = 0; i < points[node].size(); i++){
            if(points[node][i] == 1 && !vis[i]){
                dfs(points, vis, i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& connections) {
        int n = connections.size();
        int ans = 0;
        vector<bool> vis(n, 0);
        for(int i = 0; i < n; i++){
            if(vis[i]) continue;
            ans++;
            dfs(connections, vis, i);
        }
        return ans;
    }
};