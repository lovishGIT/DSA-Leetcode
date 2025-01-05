class Solution {
public:
    bool checkIfPlacable(vector<vector<char>> &board, int i, int j, int num) {
        for(int x=0; x<9; x++) {
            if(board[i][x] != '.' && board[i][x]-'0' == num) {
                return false;
            }
            if(board[x][j] != '.' && board[x][j]-'0' == num) {
                return false;
            }
        }
        int cond_i= (int(i/3)*3);
        int cond_j= (int(j/3)*3);
        for(int x=0; x<3; x++) {
            for(int y= 0; y<3; y++) {
                if(board[cond_i + x][cond_j + y] - '0' == num) {
                    return false;
                }
            }
        }
        return true;
    }
    bool solutionSudoku(vector<vector<char>> &board, int i=0, int j=0) {
        while(board[i][j] != '.') {
            j++;
            if(j>=9) {
                i++;
                j=0;
            }
            if(i>=9) {
                // cout<< "khatam";
                return true;
            }
        }
        for(int num=1; num<=9; num++) {
            // cout<< i<<j<<"->"<<num<<" ";
            if(checkIfPlacable(board, i, j, num)) {
                board[i][j] = num+'0';
                if(solutionSudoku(board, i, j+1)) {
                    return true;
                }
                board[i][j] = '.';
                cout<< endl;
            }
        }
        // cout<< "khatam";
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        if(solutionSudoku(board)) {
            cout<< endl;
            for(auto i: board) {
                for(auto j: i) {
                    cout<< j<< " ";
                }cout<<endl;
            }cout<<endl;
        } else {
            cout<< "0";
        }
    }
};