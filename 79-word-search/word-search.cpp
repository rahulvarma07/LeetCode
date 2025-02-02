class Solution {
public:
    bool isTrue = false;
    void compute(vector<vector<char>>&board, vector<vector<bool>>&marks, string &str, int x, int y, int ind){
        if(ind >= str.size()){
            isTrue = true;
            return;
        }
        if(isTrue) return;
        if(!(x >= 0 && x < board.size()) || !(y >= 0 && y < board[x].size())) return;
        if(marks[x][y]) return;
        if(str[ind] != board[x][y]) return;
        marks[x][y] = true;
        compute(board, marks, str, x-1, y, ind+1);
        compute(board, marks, str, x, y+1, ind+1);
        compute(board, marks, str, x+1, y, ind+1);
        compute(board, marks, str, x, y-1, ind+1);
        marks[x][y] = false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>>check(board.size(), vector<bool>(board[0].size()));
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == word[0]){
                    compute(board, check, word, i, j, 0);
                }
                if(isTrue) return true;
            }
        }
        return false;
    }
};