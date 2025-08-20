class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 1){
                    ans++;
                    int b1 = i+1, b2 = j+1;
                    while(b1 < matrix.size() && b2 < matrix[i].size()){
                        bool isTrue = true;
                        for(int x = i; x <= b1; x++){
                            if(!isTrue) break;
                            for(int y = j; y <= b2; y++){
                                if(matrix[x][y] == 0){
                                    isTrue = false;
                                    break;
                                }
                            }
                        }
                        b1++;
                        b2++;
                        if(isTrue) ans++;
                        else break;
                    }
                }
            }
        }
        return ans;
        // 01 02
        // 11 12
    }
};