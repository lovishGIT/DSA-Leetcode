class Solution {
public:
    int lengthOfLastWord(string s) {
        int check =0;
        for(int i=s.length()-1;i>=0;i--) {
            cout<< s[i];
            if(check!=0 && s[i]==' ') {
                break;
            }
            else if(s[i]!=' '){
                check++;
            }
        }
        return check;

    }
};