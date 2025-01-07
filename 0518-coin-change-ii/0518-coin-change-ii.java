class Solution {
    private int func(int[] coins, int n, int amount, int dp[][]) {
        if(amount == 0) return 1;
        if(amount < 0 || n < 0) return 0;

        if(dp[n][amount] != -1) return dp[n][amount];

        int temp = 0;
        if(amount >= coins[n]) { 
            dp[n][amount-coins[n]] = func(coins, n, amount - coins[n], dp);
            temp += dp[n][amount-coins[n]];
        }
        if(n > 0) {
            dp[n-1][amount] = func(coins, n-1, amount, dp);
            temp += dp[n-1][amount];
        }

        return temp;
    }
    public int change(int amount, int[] coins) {
        int n = coins.length;
        int dp[][] = new int[n][amount+1];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < amount + 1; j++) {
                dp[i][j] = -1;
            }
        }
        return func(coins, n-1, amount, dp);
    }
}