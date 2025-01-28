class Solution {
public:
    double myPow(double x, long n) {
        if(x == 0 || x == 1) return x;
        if(x == -1) return n % 2 == 0 ? 1 : -1;
        if(n == INT_MAX) return x;
        if(n == INT_MIN) return 0;
        if(n < 0) {
            x = 1.0 / x;
            n = abs(n);
        }
        double ans = 1;
        for(long i = 0; i < n; i++) ans *= x;
        return ans;
    }
};