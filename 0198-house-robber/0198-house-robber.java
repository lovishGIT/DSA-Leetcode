class Solution {
    public int func(int[] nums, int i, int n, int dp[]) {
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        
        int money = 0;
        if(i+2 < n) {
            if(dp[i+2] == -1) dp[i+2] = func(nums, i+2, n, dp);
            money = Math.max(money, dp[i+2]);
        }
        if(i+3 < n) {
            if(dp[i+3] == -1) dp[i+3] = func(nums, i+3, n, dp);
            money = Math.max(money, dp[i+3]);
        }

        return nums[i] + money;
    }
    public int rob(int[] nums) {
        int n = nums.length;
        int dp[] = new int[nums.length + 1];
        Arrays.fill(dp, -1);
        dp[0] = func(nums, 0, n, dp);
        dp[1] = func(nums, 1, n, dp);
        return Math.max(dp[0],dp[1]);
    }
}