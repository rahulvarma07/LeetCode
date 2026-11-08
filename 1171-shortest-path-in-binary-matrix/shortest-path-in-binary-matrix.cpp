class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1) return -1;
        queue<vector<int>> q;
        q.push({0, 0});
        vector<int> dx = {-1, 1, 0, 0, -1, -1,  1, 1};
        vector<int> dy = {0, 0, -1, 1, -1,  1,  -1, 1};
        vector<vector<bool>> isVisited(n, vector<bool>(m, false));
        isVisited[0][0] = true;
        int steps = 1;
        while(!q.empty()) {
            int s = q.size();
            while(s--) {
                int i = q.front()[0], j = q.front()[1];
                q.pop();
                if(i == n-1 && j == m-1) return steps;
                for(int k = 0; k < 8; k++) {
                    int xi = i + dx[k], yj = j + dy[k];
                    if(!(xi < 0 || yj < 0 || xi >= n || yj >= m || grid[xi][yj] == 1 || isVisited[xi][yj])) {
                        q.push({xi, yj});
                        isVisited[xi][yj] = true;
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};