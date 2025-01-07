class Solution {
    private int func(String text1, int ind1, String text2, int ind2, int[][] dp) {
        if(ind1 < 0 || ind2 < 0) return 0;
        if(dp[ind1][ind2] != -1) {
            return dp[ind1][ind2];
        }
        if(text1.charAt(ind1) == text2.charAt(ind2)) {
            int temp = 1;
            if(ind1 > 0 && ind2 > 0) {
                dp[ind1-1][ind2-1] = func(text1, ind1-1, text2, ind2-1, dp);
                temp += dp[ind1-1][ind2-1]; 
            }
            return temp;
        }
        int temp = 0;
        if(ind1 > 0) {
            dp[ind1-1][ind2] = func(text1, ind1-1, text2, ind2, dp);
            temp = Math.max(temp, dp[ind1-1][ind2]);
        }
        if(ind2 > 0) {
            dp[ind1][ind2-1] = func(text1, ind1, text2, ind2-1, dp);
            temp = Math.max(temp, dp[ind1][ind2-1]);
        }
        return temp;
    }
    public int longestCommonSubsequence(String text1, String text2) {
        int n1 = text1.length();
        int n2 = text2.length();
        int[][] dp = new int[n1][n2];
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                dp[i][j] = -1;
            }
        }
        return func(text1, n1-1, text2, n2-1, dp);
    }
}