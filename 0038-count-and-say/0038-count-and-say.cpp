class Solution {
public:
    string say(string s) {

        string ans = "";
        char mark = s[0];
        char count = '1';

        cout<< "here " << s<<endl;

        for(int i=1; i<s.length(); i++) {

            if(mark == s[i]) {
                count += 1;
            }

            else {
                ans+= count;
                ans+= mark;
                count = '1';
                mark= s[i];
            }
        }
        ans+= count;
        ans+= mark;
        return ans;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        return say(countAndSay(n-1));
    }
};