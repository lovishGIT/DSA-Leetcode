class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int x=0; 
        while(x<s.length()) {
            {
                char ch= s[0];
                for(int i=1; i<s.length(); i++) {
                    s[i-1] = s[i];
                }
                s[s.length()-1] = ch;
            }
            x++;
            if(s==goal) return true;
        }
        return false;
    }
};