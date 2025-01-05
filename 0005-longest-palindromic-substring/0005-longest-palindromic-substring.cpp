class Solution {
public:
    bool checkPalindrome(string str) {
        int first= 1;
        int last= str.length()-2;
        while(first < last) {
            if(str[first] != str[last]) {
                // cout<< first << " "<< last << endl;
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans= "";
        ans+= s[0];
        int n= s.length();
        for(int i=0; i<n; i++) {
            string str= "";
            str+= s[i]; 
            for(int j=i+1; j<n; j++) {
                str+= s[j];
                // cout<< str << " " << (ans.length()>0 ? ans:"@") << " " << i << " " << j <<endl;
                if(str[0] == s[j] && ans.length() < j-i+1 && checkPalindrome(str)) {
                    ans= str;
                }
            }
            if(ans.length() > n-i) {
                break;
            }
        }
        return ans;
    }
};