class Solution {
public:
    int addDigits(int num) {

        if(num<10) return num;

        int digit;
        int sum=0;
        while(num>0) {
            digit= num% 10;
            num  = num/ 10;
            sum+= digit;
            // cout<< sum << endl;
            if(sum>=10) {
                sum = (sum%10) + 1;
            }
        }
        return sum;
    }
};