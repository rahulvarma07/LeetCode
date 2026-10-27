class Solution {
    public String[] createGrid(int m, int n) {
        String[] ans = new String[m];
        for(int i = 0; i < m; i++) {
            if(i == 0) {
                ans[i] = ".".repeat(n);
            }else {
                String str = "#".repeat(n-1);
                str += '.';
                ans[i] = str;
            }
        }
        return ans;
    }
}