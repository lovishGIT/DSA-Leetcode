class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n= matrix.length;
        int m= matrix[0].length;
        int i=0;
        int j= m-1;
        while(i>=0 && j>=0 && i<n && j<m) {
            if(matrix[i][j] > target) {
                j--;
            } else if(matrix[i][j] < target) {
                i++;
            } else {
                return true;
            }
        }
        return false;
    }
}