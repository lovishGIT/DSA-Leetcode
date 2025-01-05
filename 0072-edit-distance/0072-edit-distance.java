class Solution {
    private int func(String word1, int i, String word2, int j, int dp[][]) {
        if(i < 0 && j < 0) return 0;
        
        if(i < 0) return j+1; // other is having 0, 1 ... j element left. so j+1 remove operations
        if(j < 0) return i+1; // similar but i+1 insert operations

        if(dp[i][j] != -1) return dp[i][j];

        if(word1.charAt(i) == word2.charAt(j)) {
            return dp[i][j] = func(word1, i-1, word2, j-1, dp);
        }

        if(i == 0 && j == 0) return 1;

        int temp = Integer.MAX_VALUE;
        if(i > 0) {
            dp[i-1][j] = func(word1, i-1, word2, j, dp);
            temp = Math.min(temp, dp[i-1][j]); // delete
        }
        if(j > 0) {
            dp[i][j-1] = func(word1, i, word2, j-1, dp);
            temp = Math.min(temp, dp[i][j-1]); // insert
        }
        if(i > 0 && j > 0) {
            dp[i-1][j-1] = func(word1, i-1, word2, j-1, dp);
            temp = Math.min(temp, dp[i-1][j-1]); // replace
        }
        
        if(temp != Integer.MAX_VALUE) return temp + 1;
        return temp;
    }

    public int minDistance(String word1, String word2) {
        int n = word1.length();
        int m = word2.length();
        int dp[][] = new int[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                dp[i][j] = -1;
            }
        }
        return func(word1, n-1, word2, m-1, dp);
    }
}