class Solution {
    // private int func(int n, int dp[]) {
    //     if(n <= 1)  return 1;
    //     if(dp[n] != -1) return dp[n];
    //     int temp = 0;
    //     if(n>0) {
    //         dp[n-1] = func(n-1, dp);
    //         temp+= dp[n-1];
    //     }
    //     if(n>1) {
    //         dp[n-2] = func(n-2, dp);
    //         temp += dp[n-2];
    //     }
    //     return dp[n] = temp;
    // }
    public int climbStairs(int n) {
        // int dp[] = new int[n+1];
        // Arrays.fill(dp, -1);

        int prev2 = 1;
        int prev = 1;

        for(int i = 2; i <= n; i++) {
            int temp = prev;
            prev = prev + prev2;
            prev2 = temp;
        }

        return prev;

        // return func(n, dp);
    }
} 