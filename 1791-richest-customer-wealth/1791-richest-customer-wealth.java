class Solution {
    public int maximumWealth(int[][] accounts) {
        int max= 0;
        for(int i= 0; i<accounts.length; i++) {
            int count= accounts[i][0];
            for(int j= 1; j<accounts[i].length; j++) {
                count+= accounts[i][j];
            }
            max= max > count ? max : count;
         }
         return max;
    }
}