class Solution {
    private int func(int[][] grid, int m, int n, int dp[][]) {
        if(m < 0 || n < 0) return Integer.MAX_VALUE;
        if(m == 0 && n == 0) return grid[m][n];

        if(dp[m][n] != -1) {
            return dp[m][n];
        }

        int a = func(grid, m-1, n, dp);
        if(a!= Integer.MAX_VALUE) dp[m-1][n] = a;
        int b = func(grid, m, n-1, dp);
        if(b!= Integer.MAX_VALUE) dp[m][n-1] = b;
        
        int temp = Integer.MAX_VALUE;
        temp = Math.min(temp, a);
        temp = Math.min(temp, b);

        return grid[m][n] + temp;
    }
    public int minPathSum(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        int dp[][] = new int[m][n];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                dp[i][j] = -1;
            }
        }
        return func(grid, m-1, n-1, dp);
    }
}