class Solution {
    boolean isCompleted = false;
    int[] ans = new int[2];
    public void makeMove(int i, int j, boolean[][] isVisited, char[][] grid, int n, int m) {
        if(isCompleted) return;
        if(i < 0 || i >= n || j < 0 || j >= m) {
            isCompleted = true;
            return;
        }
        if(isVisited[i][j] || isCompleted) return;
        ans[0] = i;
        ans[1] = j;
        isVisited[i][j] = true;
        if(grid[i][j] == 'R') makeMove(i, j+1, isVisited, grid, n, m);
        else if(grid[i][j] == 'L') makeMove(i, j-1, isVisited, grid, n, m);
        else if(grid[i][j] == 'U') makeMove(i-1, j, isVisited, grid, n, m);
        else makeMove(i+1, j, isVisited, grid, n, m);
     }
    public int[] lastVisitedCell(char[][] grid) {
        int n = grid.length, m = grid[0].length;
        boolean[][] isVisited = new boolean[n][m];
        makeMove(0, 0, isVisited, grid, n, m);
        return ans;
    }
}