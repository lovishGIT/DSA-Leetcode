class Solution {
public:
    int appendCharacters(string s, string t) {
        int mv= 0;
        int i=0;
        while(mv<s.size() && i<t.size()) {
            if(s[mv]==t[i]) {
                i++;
            }
            mv++;
        }
        return t.size()-i;
    }
};