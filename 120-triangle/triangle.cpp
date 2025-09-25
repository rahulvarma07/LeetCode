class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans = INT_MAX, n = triangle.size();
        if(n == 1) return triangle[0][0];
        for(int i = 1; i < n; i++){
            int m = triangle[i].size();
            for(int j = 0; j < m; j++){
                if(j == 0){
                    triangle[i][j] += triangle[i-1][j];
                }else if(j == m-1){
                    triangle[i][j] += triangle[i-1][j-1];
                }else{
                    int sum = triangle[i][j];
                    triangle[i][j] = min(sum + triangle[i-1][j-1], sum + triangle[i-1][j]);
                }
                if(i == n-1){
                    ans = min(ans, triangle[i][j]);
                }
            }
        }
        return ans;
    }
};