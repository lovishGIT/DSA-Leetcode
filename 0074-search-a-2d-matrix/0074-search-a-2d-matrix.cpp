class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nr = matrix.size();
        int nc = matrix[0].size();

        int first = 0;
        int last = nr * nc;
        while(first <= last) {
            int mid = first + (last - first) / 2;
            if(mid/nc >= nr || mid%nc >= nc) {
                last = mid - 1;
                continue;
            }
            if(matrix[mid/nc][mid%nc] == target) return true;
            else if(matrix[mid/nc][mid%nc] > target) last = mid - 1;
            else first = mid + 1;
        }

        return false;
    }
};