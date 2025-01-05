class Solution {
public:
    int strStr(string haystack, string needle) {
        int len= haystack.length() - needle.length() + 1;
        int i,j;
        for(i=0;i<len;i++) {
            if(haystack[i] == needle[0] ) {
                for(j=1;j<needle.length();j++) {
                    if(haystack[i+j] != needle[j]) {
                        j=0;
                        break;
                    }
                    // cout<< haystack[i+j] <<" "<< needle[j]<<" "<<needle.length()<<endl;
                }
                if(j>=needle.length()-1) {
                    return i;
                }
            }
        }
        return -1;
    }
};