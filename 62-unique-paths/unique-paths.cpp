class Solution {
public:
    int compute(int i, int j, int m, int n, vector<vector<int>>&mem){
        if(!(i >= 0 && i < m) || !(j >= 0 && j < n)) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(mem[i][j] != -1) return mem[i][j];
        int left = compute(i, j+1, m, n, mem);
        int right = compute(i+1, j, m, n, mem);
        mem[i][j] = (left+right);
        return (left+right);
    }
    int uniquePaths(int m, int n) {
        int i = 0, j = 0;
        vector<vector<int>>mem(m, vector<int>(n, -1));
        int ans = compute(i, j, m, n, mem);
        return ans;   
    }
};