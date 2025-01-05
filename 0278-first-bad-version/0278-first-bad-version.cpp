// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int findInitialPoint(int i, int n) {
        if(i == n) {
            return isBadVersion(i) ? i : n;
        }
        int mid = i + ((n-i)/2);
        
        if(isBadVersion(mid)) {
            return findInitialPoint(i, mid);
        } else {
            return findInitialPoint(mid+1, n);
        }
    }
    int firstBadVersion(int n) {
        return findInitialPoint(0, n);
    }
};