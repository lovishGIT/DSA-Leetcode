class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int n1 = A.size();
        int n2 = B.size();
        if(n1 > n2) return findMedianSortedArrays(B, A);

        int n = (n1 + n2 + 1) / 2;

        int first = 0;
        int last = n1;

        while(first <= last) {
            int mid1 = first + (last - first) / 2;
            int mid2 = n - mid1;
            // get mid elements from A

            int left1 = INT_MIN, left2 = INT_MIN;
            int right1 = INT_MAX, right2 = INT_MAX;

            if(mid1 > 0) left1 = A[mid1 - 1];
            if(mid1 < n1) right1 = A[mid1];

            if(mid2 > 0) left2 = B[mid2 - 1];
            if(mid2 < n2) right2 = B[mid2];
            
            
            if(left1 <= right2 && left2 <= right1) {
                // cout << first << " " << mid1 << " " << mid2 << " " << last; 
                first = max(left1, left2);
                last = min(right1, right2);
                if((n1 + n2) % 2 != 0) return first;
                return (first + last) / 2.0;
            } else if(left1 <= right2) {
                first = mid1 + 1;
            } else {
                last = mid1 - 1;
            }
        }
        
        return 0;
    }
};