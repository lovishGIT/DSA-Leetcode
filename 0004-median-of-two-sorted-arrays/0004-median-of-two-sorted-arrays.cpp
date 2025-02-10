class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int n= A.size();
        int m= B.size();

        int ind2 = (n+m) / 2;
        int ind1 = ind2 - 1;

        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        
        int cnt = 0;
        int i = 0, j = 0;
        while(cnt < n+m) {
            int ele = -1;
            if(i < n && j < m) {
                if(A[i] <= B[j]) {
                    ele = A[i];
                    i++;
                } else {
                    ele = B[j];
                    j++;
                }
            } else if(i < n) {
                ele = A[i];
                i++;
            } else {
                ele = B[j];
                j++;
            }

            if(cnt == ind1) ele1 = ele;
            else if(cnt == ind2) { ele2 = ele; break;}
            cnt++;
        }

        // cout << ind1 << " -> " << ele1 << " && " << ind2 << " -> " << ele2 << endl;
        if((n+m) %2 == 0) {
            return (ele1+ele2) / 2.0;
        } else {
            return ele2;
        }
    }
};