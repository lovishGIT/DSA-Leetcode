class Solution {
public:
    void mark(vector<vector<int>> &grid, int i, int j) {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] != 1) return;
        grid[i][j] = -1;
        mark(grid, i+1, j);
        mark(grid, i-1, j);
        mark(grid, i, j+1);
        mark(grid, i, j-1);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n= grid2.size();
        int m= grid2[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                bool check = ( 
                    (grid1[i][j] == 0) || (i!=0 && grid2[i-1][j] == -1) || (j!=0 && grid2[i][j-1] == -1)
                );
                if(grid2[i][j] == 1 && check) {
                    mark(grid2, i, j);
                }
            }
        }

        int count = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid2[i][j] == 1) {
                    count++;
                    mark(grid2, i, j);
                }
            }
        }
        return count;
    }   
};