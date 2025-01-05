class Solution {
public:
    string addStrings(string ans, string temp) {
        int n= ans.length()-1;
        int m= temp.length()-1;
        if(m>n) return addStrings(temp, ans);
        if(m == -1) return ans;
        int carry = 0;
        while(m>=0) {
            int sum = (temp[m]-'0') + (ans[n]-'0') + carry;
            cout<< sum<< ",";
            ans[n] = (char)(sum%10) + '0';
            carry = sum/10;
            n--;m--;
        }
        while(carry>0) {
            if(n<0) {
                ans= (char)((carry) + '0') + ans;
            } // add to front 
            else if(ans[n] == '9') {
                ans[n] = '0';
                if(n-1<0) ans = '1' + ans; 
                else {
                    n--;
                    continue;
                }
            }
            else {
                ans[n] += carry;
            }
            carry = 0;
        }
        return ans;
    }
};