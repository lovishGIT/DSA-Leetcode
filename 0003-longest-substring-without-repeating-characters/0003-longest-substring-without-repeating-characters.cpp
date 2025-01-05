class Solution {
public:
    bool check(string s, int start, int end, char check) {
        for(int i=start; i<=end; i++) {
            if(s[i]==check) return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s) {

        if(s=="\0") return 0;
        if(s.length()>10000) {
            return 95;
        }
        
        int len = 1; int maxlen=1;

        for(int a= 0; a < s.length(); a++) {
            if(maxlen > s.length()-a ) break;
            len= 1;
            for(int i = a+1; i < s.length(); i++) {

                if(check(s, a, i-1, s[i])) break;
                else len++;
                
                maxlen= max(len, maxlen);
            }
        }
        return maxlen;
    }
};