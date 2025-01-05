class Solution {
    private int func(int[][] obstacleGrid, int n, int m, int dp[][]) {
        if(n < 0 || m < 0) return 0;
        if(n == 0 && m == 0) return 1;
        if(obstacleGrid[n][m] == 1) return 0;

        if(dp[n][m] != -1) return dp[n][m];  


        int temp = 0;
        if(n > 0) {
            dp[n-1][m] = func(obstacleGrid, n-1, m, dp);
            temp += dp[n-1][m];
        }
        if(m > 0) {
            dp[n][m-1] = func(obstacleGrid, n, m-1, dp);
            temp += dp[n][m-1];
        }

        return temp;
    }
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int n = obstacleGrid.length;
        int m = obstacleGrid[0].length;
        if(obstacleGrid[0][0] == 1 || obstacleGrid[n-1][m-1] == 1) return 0;

        int dp[][] = new int[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dp[i][j] = -1;
            }
        }
        return func(obstacleGrid, n-1, m-1, dp);
    }
}