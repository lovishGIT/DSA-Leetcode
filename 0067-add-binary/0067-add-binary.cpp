class Solution {
public:
    string addBinary(string a, string b) {
        string temp;
        if(a.length() < b.length()) {
            temp= a;
            a= b;
            b= temp;
        }
        // handled which string is larger
        
        int ind= 1, carry=0; 
        while( ind <= b.length() ) {
            int b_bro= b[b.length()-ind] - '0';
            // cout<< a.length()-ind << "=" << a[a.length()-ind] << " " << b.length()-ind << "=" << b_bro << " " << carry <<endl;
            if(carry == 1) {
                carry= (a[a.length()-ind] == '1') ? 1 : 0;
                a[a.length()-ind] = (a[a.length()-ind] == '1') ? '0' : '1';
            }
            // cout<< a.length()-ind << "=" << a[a.length()-ind] << " " << b.length()-ind << "=" << b_bro << " " << carry <<endl;
            if(b_bro == 0) {
                ind++;
                continue;
            }
            
            if( a[a.length()-ind] == '1') {
                carry = 1;
                a[a.length()-ind] = '0';
            }
            else {
                a[a.length()-ind] = '1';
            }
            // cout<< a.length()-ind << "=" << a[a.length()-ind] << ".carry= " << carry <<endl;
            ind++;
        }
        while(carry == 1 && ind <= a.length()) {
            // cout<< ind << "=" << a[a.length()-ind] << ".carry= " << carry <<endl;
            carry= (a[a.length()-ind] == '1') ? 1 : 0;
            a[a.length()-ind] = (a[a.length()-ind] == '1') ? '0' : '1';
            ind++;
        }
        if(carry==1){
            a= '1'+a;
        }
        return a;
    }
};

// 0 1 0 1 0
// 0 1 0 1 1
// 1 0 1 0 1