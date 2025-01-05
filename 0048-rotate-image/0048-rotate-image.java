class Solution {
    public static void Transpose(int arr[][], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    public static void ReverseRows(int arr[][], int n) {
        for (int i = 0; i < n; i++) {
            int st = 0;
            int ed = n - 1;
            while (st<ed) {
                int temp = arr[i][st];
                arr[i][st] = arr[i][ed];
                arr[i][ed] = temp;
                st++; ed--;
            }
        }
    }
    void rotate(int[][] matrix) {
        int n = matrix.length;
        Transpose(matrix, n);
        ReverseRows(matrix, n);
    }
};