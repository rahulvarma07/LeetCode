class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i <= 8; i++){
            unordered_map<int, int> isFound;
            for(int j = 0; j <= 8; j++){
                if(board[i][j] == '.') continue;
                if(isFound.find(board[i][j]) == isFound.end()){
                    isFound[board[i][j]] = 1;
                }
                else return false;
            }
            isFound.clear();
            for(int j = 0; j <= 8; j++){
                if(board[j][i] == '.') continue;
                if(isFound.find(board[j][i]) == isFound.end()){
                    isFound[board[j][i]] = 1;
                }
                else return false;
            }
        }

        // check all three three boxes

        for(int i = 0; i <= 8; i += 3){
            for(int j = 0; j <= 8; j += 3){
                unordered_map<int, bool> isFound;
                for(int x = i; x <= i+2; x++){
                    for(int y = j; y <= j+2; y++){
                        if(board[x][y] == '.') continue;
                        if(isFound.find(board[x][y]) == isFound.end()){
                            isFound[board[x][y]] = 1;
                        }
                        else return false;
                    }
                }
            }
        }
        return true;
    }
};