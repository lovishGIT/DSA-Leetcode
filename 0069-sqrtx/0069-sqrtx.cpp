class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int first = 1;
        int last = x - 1;

        while(first <= last) {
            int mid = first + (last - first) / 2;

            if(mid <= x / mid) first = mid + 1;
            else last = mid - 1;
        }

        return last;
    }
};