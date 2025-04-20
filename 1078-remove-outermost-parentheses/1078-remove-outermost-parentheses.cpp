class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int prev = 0;
        int parenthesis = 0;

        string result = "";
        
        for(int i = 0; i < n; i++) {
            prev = parenthesis;
            if(s[i] == '(') parenthesis++;
            if(s[i] == ')') parenthesis--;
            cout<< parenthesis << " ";

            if(prev != 0 && parenthesis != 0) result += s[i];
        }
        
        return result;
    }
};