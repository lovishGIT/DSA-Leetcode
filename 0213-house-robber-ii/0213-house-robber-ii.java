class Solution {
    public int func(int[] nums, int i, int n, int dp[]) {
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];

        int nottake = 0;
        if(i+1 < n) {
            dp[i+1] = func(nums, i+1, n, dp);
            nottake += dp[i+1];
        } 
        int take = nums[i];
        if(i+2 < n) {
            dp[i+2] = func(nums, i+2, n, dp);
            take += dp[i+2];
        }

        return Math.max(nottake, take);
    }
    public int rob(int[] nums) {
        int n = nums.length;
        if(n==1) return nums[0];

        int dp[] = new int[n];

        Arrays.fill(dp, -1);
        int noFirst = func(nums, 1, n, dp);
        Arrays.fill(dp, -1);
        int noLast = func(nums, 0, n-1, dp);
        
        return Math.max(noFirst, noLast);
    }
}