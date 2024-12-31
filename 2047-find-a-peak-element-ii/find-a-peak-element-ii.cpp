class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        if(n == 1 && m == 1) return {0,0};
        if(n == 1 && m > 1){
            if(mat[0][0] > mat[0][1]) return {0,0};
            if(mat[0][m-1] > mat[0][m-2]) return {0, m-1};
            int low = 1, high = m-2;
            while(low <= high){
            int mid = (low + high)/2;
            if(mat[0][mid] > mat[0][mid+1]) return {0, mid};
            else if(mat[0][mid+1] > mat[0][mid]) low = mid+1;
            else high = mid-1;
        }
        }
        if(mat[0][0] > mat[0][1] && mat[0][0] > mat[1][0]) return {0,0};
        if(mat[0][m-1] > mat[0][m-2] && mat[0][m-1] > mat[1][m-1]) return {0, m-1};
        int low = 1, high = m-2;
        while(low <= high){
            int mid = (low + high)/2;
            if(mat[0][mid] > mat[0][mid+1] && mat[0][mid] > mat[0][mid-1] && mat[0][mid] > mat[1][mid]) return {0, mid};
            else if(mat[0][mid+1] > mat[0][mid]) low = mid+1;
            else high = mid-1;
        }

        for(int i = 1; i < n-1; i++){
            if(mat[i][0] > mat[i][1] && mat[i][0] > mat[i-1][0] && mat[i][0] > mat[i+1][0]) return {1, 0};
            if(mat[i][m-1] > mat[i][m-2] && mat[i][m-1] > mat[i-1][m-1] && mat[i][m-1] > mat[i+1][m-1]) return {i, m-1};
            int low = 1, high = m-2;
            while(low <= high){
                int mid = (low + high)/2;
                if(mat[i][mid] > mat[i][mid-1] && mat[i][mid] > mat[i][mid+1] && mat[i][mid] > mat[i-1][mid] && mat[i][mid] > mat[i+1][mid]) return {i, mid};
                else if(mat[i][mid+1] > mat[i][mid]) low = mid+1;
                else high = mid-1;
            }
        }
        if(mat[n-1][0] > mat[n-1][1] && mat[n-1][0] > mat[n-2][0]) return {n-1,0};
        if(mat[n-1][m-1] > mat[n-1][m-2] && mat[n-1][m-1] > mat[n-2][m-1]) return {n-1, m-1};
        low = 1, high = m-2;
        while(low <= high){
            int mid = (low + high)/2;
            if(mat[n-1][mid] > mat[n-1][mid+1] && mat[n-1][mid] > mat[n-1][mid-1] && mat[n-1][mid] > mat[n-2][mid]) return {n-1, mid};
            else if(mat[0][mid+1] > mat[0][mid]) low = mid+1;
            else high = mid-1;
        }
        return {};
    }
};