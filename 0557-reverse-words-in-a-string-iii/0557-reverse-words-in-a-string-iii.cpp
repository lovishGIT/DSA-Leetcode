class Solution {
public:

    void reverse_it(string &s, int i, int n) {
        char temp;
        cout<< "here";
        while( i<n ) {
            temp= s[i];
            s[i++]= s[n];
            s[n--]= temp;
        }
    }

    string reverseWords(string s) {
        int x= 0;
        int i= 0;
        for( ; i<s.length()+1; ) {
            if(s[i]==' ' || s[i]=='\0') {
                cout<< x << " " << i << endl;
                reverse_it(s, x, i-1);
                x= i+1;
            }
            i++;
        }

        return s;
    }
};