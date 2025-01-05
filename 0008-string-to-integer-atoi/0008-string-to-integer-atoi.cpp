class Solution {
public:
    long int myAtoi(string s) {

        int i= 0;
        while(s[i]==' ' && i<s.length()) {
            i++;
        }

        bool neg= false, pos= false;
        if(s[i]=='+') {
            pos= true;
            i++;
        }
        if(s[i]=='-') {
            neg= true;
            i++;
        }
        if(pos && neg) return 0;

        long ans=0;

        while(s[i]>='0' && s[i]<='9' && i<s.length()) {

            int have = (neg)? -1 : 1;
            if(ans* have >=INT_MAX ) return INT_MAX;
            if(ans* have <=INT_MIN ) return INT_MIN;

            ans= (ans*10) + (s[i]-'0');
            i++;
        }
        if(neg) ans*= -1;

        if(ans > INT_MAX)
            ans = INT_MAX;

        if(ans < INT_MIN)
            ans = INT_MIN;

        return (int) ans;
    }     
};