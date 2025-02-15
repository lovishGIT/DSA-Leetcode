class Solution {
public:
    int getBiginColumn(vector<vector<int>>& mat, int col) {
        int maxi = INT_MIN;
        int ind = -1;
        for(int i = 0; i < mat.size(); i++) {
            if(maxi < mat[i][col]) {
                maxi = mat[i][col];
                ind = i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

        int first = 0;
        int last = c - 1;

        while(first <= last) {
            int mid = first + (last - first) / 2;
            int maxInd = getBiginColumn(mat, mid); 
            bool cond1 = mid == 0 || (mat[maxInd][mid] > mat[maxInd][mid-1]);
            bool cond2 = mid == c - 1 || (mat[maxInd][mid] > mat[maxInd][mid+1]);

            // cout << mid << " " << cond1 << " " << cond2 << endl;
            if(cond1 && cond2) {
                return {maxInd, mid};
            } else if(cond1) {
                first = mid + 1;
            } else {
                last = mid - 1;
            }
        }

        return {-1, -1};
    }
};

// 25 37 23 37 19
// 45 19  2 43 26
// 18  1 37 44 50