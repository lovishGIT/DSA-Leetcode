class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        // {{r, c}, t}
        queue<pair<pair<int, int>, int>> que;
        int vis[n][m];
        int cntFresh = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    que.push(
                        {{i, j}, 0}
                    );
                    vis[i][j] = 2;
                } else {
                    if(grid[i][j] == 1) cntFresh++;
                    vis[i][j] = 0;
                }
            }
        }
        // U R D L
        int ChangeRow[] = {-1, 0, 1,  0};
        int ChangeCol[] = { 0, 1, 0, -1};

        int time = 0;

        while(!que.empty()) {
            int r = que.front().first.first;
            int c = que.front().first.second;
            int t = que.front().second;

            time = max(time, t);
            que.pop();

            for(int i = 0; i < 4; i++) {
                int Nrow = r + ChangeRow[i];
                int Ncol = c + ChangeCol[i];

                if(Nrow >= 0 && Ncol >= 0 && Nrow < n && Ncol < m && vis[Nrow][Ncol] == 0 && grid[Nrow][Ncol] == 1) {
                    que.push(
                        {{Nrow, Ncol}, t + 1}
                    );
                    cntFresh--;
                    vis[Nrow][Ncol] = 2;
                }                
            }
        }

        if(cntFresh > 0) return -1;
        return time;
    }
};