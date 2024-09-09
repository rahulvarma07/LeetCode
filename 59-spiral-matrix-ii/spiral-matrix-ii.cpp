class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n,0));
        int l = 0, t = 0, r = n-1, b = n-1;
        int cnt = 1;
        while(l <= r && t <= b){
            for(int i = l; i <= r; i++){
                ans[l][i] = cnt;
                cnt++;
            }
            t++;
            for(int i = t; i <= b; i++){
                ans[i][r] = cnt;
                cnt++;
            }
            r--;
            if(t <= b){
                for(int i = r; i >= l; i--){
                ans[b][i] = cnt;
                cnt++;
            }
            b--;
            }
            if(l <= r){
                for(int i = b; i >= t; i--){
                    ans[i][l] = cnt;
                    cnt++;
                }
                l++;
            }
        }
        return ans;
    }
};