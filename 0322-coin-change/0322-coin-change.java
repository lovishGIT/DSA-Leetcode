class Solution {
    private int func(int[] coins, int i, int amount, int dp[][]) {
        if(amount == 0) return 0;
        if(i < 0 || amount < 0) return Integer.MAX_VALUE;

        if(dp[i][amount] != -1) return dp[i][amount];

        int temp = Integer.MAX_VALUE;
        if(amount >= coins[i]) {
            dp[i][amount - coins[i]] = func(coins, i, amount - coins[i], dp); // take
            temp = Math.min(temp, dp[i][amount - coins[i]] );
            if(temp != Integer.MAX_VALUE) {
                temp+= 1;
            } // if taken then add 1 // else it will do (int_max + 1 => int_min) // overflow errors 
        }
        if(i > 0) {
            dp[i-1][amount] = func(coins, i-1, amount, dp); // not take
            temp = Math.min(temp, dp[i-1][amount]);
        }

        return temp;
    }
    public int coinChange(int[] coins, int amount) {
        int n = coins.length;
        int dp[][] = new int[n][amount+1];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < amount + 1; j++) {
                dp[i][j] = -1;
            }
        }

        int ans = func(coins, n - 1, amount, dp);
        if(ans > amount || ans < 0) return -1;
        else return ans;  
    }
}