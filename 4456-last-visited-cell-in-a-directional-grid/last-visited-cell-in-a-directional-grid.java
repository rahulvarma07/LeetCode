class Solution {
    public int[] lastVisitedCell(char[][] grid) {
        int n = grid.length, m = grid[0].length;
        boolean[][] isVisited = new boolean[n][m];
        int ans[] = new int[2];
        int i = 0, j = 0;
        while(!(i < 0  || i >= n || j < 0 || j >= m) && !isVisited[i][j]) {
            isVisited[i][j] = true;
            ans[0] = i;
            ans[1] = j;
            if(grid[i][j] == 'R') j++;
            else if(grid[i][j] == 'L') j--;
            else if(grid[i][j] == 'U') i--;
            else i++;
        }
        return ans;
    }
}