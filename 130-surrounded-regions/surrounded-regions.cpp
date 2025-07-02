class Solution {
public:
    void findPaths(vector<vector<char>>& board, vector<vector<int>> &points, int x, int y,  vector<vector<bool>> &vis, bool &isTrue){
        if(!(x >=0 && x < board.size()) || !(y >= 0 && y < board[0].size())) return;
        if(vis[x][y]) return;
        if(board[x][y] == 'X') return;
        if(x == 0 || x == board.size()-1){
            isTrue = false;
            return;
        }
        if(y == 0 || y == board[0].size()-1){
            isTrue = false;
            return;
        }
        vis[x][y] = true;
        points.push_back({x, y});
        findPaths(board, points, x+1, y, vis, isTrue);
        findPaths(board, points, x-1, y, vis, isTrue);
        findPaths(board, points, x, y+1, vis, isTrue);
        findPaths(board, points, x, y-1, vis, isTrue);
    }

    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size()));
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == 'O'){
                    vector<vector<int>>points;
                    bool isTrue = true;
                    findPaths(board, points, i, j, vis, isTrue);
                    if(isTrue){
                        for(int x = 0; x < points.size(); x++){
                            board[points[x][0]][points[x][1]] = 'X';
                        }
                    }
                    points.clear();
                }
            }
        }
    }

};