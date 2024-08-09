class Solution {
public:
    int myFunCnt(vector<vector<int>>check){
        int n = 3;
        int m = 3;
        vector<int>freq(10, 0);
        int rsum = 0;
        int csum = 0;
        int d1sum = 0;
        int d2sum = 0;
        for(int i = 0; i < n; i++){
            rsum += check[0][i];
            csum += check[i][0];
            d1sum += check[i][i];
            d2sum += check[i][--m];
        }
        if(d1sum != d2sum) return 0;
        for(int i = 0; i < n; i++){
            int r1sum = 0, c1sum = 0;
            for(int j = 0; j < n; j++){
                if((check[i][j] >= 1 && check[i][j] <= 9) && (check[j][i] >= 1 && check[j][i] <= 9)){
                    freq[check[i][j]] += 1;
                }
                else{
                    return 0;
                }
                r1sum += check[i][j];
                c1sum += check[j][i];
            }
            if(r1sum != rsum || c1sum != csum) return 0;
        }
        for(int i = 1; i < freq.size(); i++){
            if(freq[i] > 1) return 0;
        }
        return 1;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        vector<vector<int>>check;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i = 0; i <= n-3; i++){
            for(int j = 0; j <= m-3; j++){
                for(int x = i; x < i+3; x++){
                    vector<int>p = {};
                    for(int y = j; y < j+3; y++){
                        p.push_back(grid[x][y]);
                    }
                    check.push_back(p);
                }
                count += myFunCnt(check);
                check.clear();
            }
        }
        return count;
    }
};