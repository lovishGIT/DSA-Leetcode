class Solution {
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int[][] spiralMatrix = new int[rows*cols][2];
        int loop = 1; // 1st loop
        int i = 0;
        while(i < rows*cols) {
            // right
            for(int j=0; j<loop; j++) {
                if(cStart>=0 && cStart<cols && rStart>=0 && rStart<rows && i < rows*cols) {
                    spiralMatrix[i][0]=rStart;
                    spiralMatrix[i][1]=cStart;
                    i++;
                }
                cStart++;
            }   
            // down
            for(int j=0; j<loop; j++) {
                if(cStart>=0 && cStart<cols && rStart>=0 && rStart<rows && i < rows*cols) {
                    spiralMatrix[i][0]=rStart;
                    spiralMatrix[i][1]=cStart;
                    i++;
                }
                rStart++;
            }
            loop++;
            // left
            for(int j=0; j<loop; j++) {
                if(cStart>=0 && cStart<cols && rStart>=0 && rStart<rows && i < rows*cols) {
                    spiralMatrix[i][0]=rStart;
                    spiralMatrix[i][1]=cStart;
                    i++;
                }
                cStart--;
            }
            // up
            for(int j=0; j<loop; j++) {
                if(cStart>=0 && cStart<cols && rStart>=0 && rStart<rows && i < rows*cols) {
                    spiralMatrix[i][0]=rStart;
                    spiralMatrix[i][1]=cStart;
                    i++;
                }
                rStart--;
            }
            loop++;
        }
        return spiralMatrix;
    }
}