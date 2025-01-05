class Solution {
public:
    string adder(string ans, string temp) {
        // 2sum of strings logic
        int n= ans.length()-1;
        int m= temp.length()-1;
        if(m>n) return adder(temp, ans);
        if(m == -1) return ans;
        int carry = 0;
        while(m>=0) {
            int sum = (temp[m]-'0') + (ans[n]-'0') + carry;
            cout<< sum<< ",";
            ans[n] = (char)(sum%10) + '0';
            carry = sum/10;
            n--;m--;
        }
        // left out carry
        // adding at front
        // adding in number: (num becames 9 + 1) or (nums)
        while(carry>0) {
            if(n<0) ans= (char)((carry) + '0') + ans; // add to front 
            else if(ans[n] == '9') {
                ans[n] = '0';
                if(n-1<0) ans = '1' + ans; 
                else {
                    n--;
                    continue;
                }
            }
            else ans[n] += carry;
            carry = 0;
        }
        return ans;
    }
    string multiply(string num1, string num2) {
        if(num1.length() < num2.length()) return multiply(num2, num1); // num1 must be bigger
        if(num1[0] == '0' || num2[0] == '0') return "0"; // constraint no leading zeros except num = 0.
        
        int n= num1.length();
        int m= num2.length();
        int j= m-1;
        string ans= "";

        while(j>=0) {
            if(num2[j]=='0') { // if 559 * 300, then just skip for 00 and do 3 part
                j--;
                continue;
            }
            int i= n-1;
            int carry= 0;
            string temp= "";
            while(i>=0) {
                int pro = (num1[i]-'0') * (num2[j]-'0') + carry;
                int dig = pro%10;
                temp= (char)(dig + '0') + temp;
                carry = pro/10;
                i--;
            }
            if (carry>0) temp = (char)(carry + '0') + temp; //left out carry
            for(int zeros=0; zeros<m-j-1; zeros++) { // adding zeros
                temp+= '0';
            }
            // cout<< temp << " + " << ans << " = ";
            ans= adder(temp, ans);   
            // cout<< ans << endl;  
            j--;
        }
        return ans;
    }
};