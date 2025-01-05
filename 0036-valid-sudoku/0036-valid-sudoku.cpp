class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board) {
        // row check

        map<int,int> mpp;
        int index=0;

        for(int i=0; i< 9; i++) {
            for(int j=0; j<9; j++) {
                if(board[j][i] == '.') continue;
                index= board[j][i] - '0';
                mpp[index]++;
                if(mpp[index]>1) {
                    cout<< "1.here";
                    return false;
                }
            }
            // cout<< mpp[5] <<endl;
            mpp.clear();
            
        }

        // column check

        for(int i=0; i< 9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] == '.') continue;
                index= board[i][j] - '0';
                mpp[index]++;
                if(mpp[index]>1) {
                    cout<<"1.here "<<index ;

                    return false;
                }
            }
            mpp.clear();
        }

        // box check

        for(int i=0; i<9; i+=3) {
            for(int j=0; j<9; j+=3) {
                int k=i, l=j;
                while(k<i+3) {
                    if(board[k][l] != '.') {
                        index= board[k][l]-'0';
                        mpp[index]++;
                        if(mpp[index]>1) {
                            cout<<"2.here "<<index <<" "<<k <<" "<<l;
                            return false;
                        }
                    }
                    l++;
                    if(l>=j+3) {
                        l=j;
                        k++;
                    }
                }
                mpp.clear();
            }
        }

        return true;

    }
};