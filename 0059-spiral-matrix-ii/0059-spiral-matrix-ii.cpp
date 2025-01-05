class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int x=0, op=1;
        int i=0, j=0;
        while (op < n*n+1) {
            while(j<n-x && op < n*n+1) {
                matrix[i][j]= op;
                op++; j++;
            }
            i++; j--;

            while(i<n-x && op < n*n+1) {
                matrix[i][j]= op;
                op++; i++;
            }
            i--; j--;

            while(j>=x && op < n*n+1) {
                matrix[i][j]= op;
                op++; j--;
            }
            i--; j++;

            while(i>=x+1 && op < n*n+1) {
                matrix[i][j]= op;
                op++; i--;
            }
            i++; j++;
            x++;
        }
        return matrix;
    }
};