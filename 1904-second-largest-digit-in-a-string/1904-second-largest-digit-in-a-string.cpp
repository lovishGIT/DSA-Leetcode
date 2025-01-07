class Solution {
public:
    int secondHighest(string s) {
        int s1= -1;
        int s2= -1;
        for(int i=0; i<s.length(); i++) {
            if(s[i]-'0' >= 0 && s[i]-'0' <10 && s[i]-'0' != s1 && s[i]-'0' != s2) {
                if(s[i]-'0' > s1) {
                    s2= s1;
                    s1= s[i]-'0';
                } else if(s[i]-'0' > s2) {
                    s2= s[i]-'0';
                }
                
            }
            // cout<< "s1= " << s1;
            // cout<< ", s2= " << s2;
            // cout<< endl;
        }
        return s2;
    }
};