class Solution {
    private int func(int m, int n, int dp[][]) {
        if(m == 0 && n == 0) return 1;
        if(m < 0 || n < 0) return 0;

        if(dp[m][n] != -1) return dp[m][n];

        int temp = 0;

        if(m-1 >= 0) {
            dp[m-1][n] = func(m-1, n, dp);
            temp += dp[m-1][n];
        }
        if(n-1 >= 0) {
            dp[m][n-1] = func(m, n-1, dp);
            temp += dp[m][n-1];
        }

        return temp;
    }
    public int uniquePaths(int m, int n) {
        int dp[][] = new int[m][n];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                dp[i][j] = -1;
            }
        }
        return func(m-1, n-1, dp);
    }
}