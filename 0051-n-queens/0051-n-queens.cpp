class Solution {
public:
    void letsMoveQueen(vector<vector<string>> &ans, vector<string> &mp, int n, int depth=0) {
        if(depth == n) {
            ans.push_back(mp);
            return;
        }
        for(int x=0; x<n; x++) {
            int y= 0;
            while(y<depth) {
                if(mp[y][x] == 'Q') {
                    y= n;
                    break;
                }
                if(x-y>0 && mp[depth-y-1][x-y-1]=='Q') {
                    y= n;
                    break;
                }
                if(x+y+1<n && mp[depth-y-1][x+y+1]=='Q') {
                    y= n;
                    break;
                }
                y++;
            }
            if(y==n) {
                continue;
            }
            mp[depth][x]= 'Q';
            letsMoveQueen(ans, mp, n, depth+1);
            mp[depth][x]= '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> mp(n, string(n, '.'));
        letsMoveQueen(ans, mp, n);
        return ans;
    }
};
