class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        long i=1; 
        while(x >= (i*i)){
            i++;
        }
        return (i-1);
    }
};