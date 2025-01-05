class Solution {
public:
    bool isPalindrome(string s) {
        int first=0;
        int last =s.length()-1;
        while(first<last) {
            

            if(s[first] >=65 && s[first] <=90 ) {
                s[first] += 32; 
            }
            if(s[last] >=65 && s[last] <=90 ) {
                s[last] += 32;   
            }
            
            if(    !((s[first]>=48 && s[first]<=57) || (s[first]>=97 && s[first]<=122))   ){
                first++;
                continue;
            }
            if(    !((s[last]>=48 && s[last]<=57) || (s[last]>=97 && s[last]<=122))   ){
                last--;
                continue;
            }

            if(s[first] != s[last] ) {
                return false;
            }
            first ++;
            last --;
        }
        return true;
    }
};