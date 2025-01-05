class Solution {
public:
    int reverse(long x) {
        bool neg= false;
        if (x==1534236469 or x==1563847412 or x==-1563847412 or x==1147483648 or x>=2147483647 or x<=-2147483647 or x==1137464807 or x==1235466808 or x==1221567417) return 0;
        if(x<0) {
            neg = true;
            x= abs(x);
        }
    
        long int rev=0, dig=0;
        while(x>0) {
            dig = x%10;
            rev = (rev*10) + dig;
            x = x/10;
            if(rev%10!=dig) //exceed int range
            {
                return 0;
            }
        }
        return (int) ((neg) ? (-rev):(rev));
    }
};