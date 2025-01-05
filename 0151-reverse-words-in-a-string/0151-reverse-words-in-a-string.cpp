class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string str= "";
        for(int i= 0; i<s.length(); i++) {
            if(s[i] == ' ' && str!="") {
                ans.push_back(str);
                str= "";
            } else if(s[i] == ' ') {
                continue;
            } else {
                str+= s[i];
            }
        }
        if(str!= "") {
            ans.push_back(str);
        }
        str= "";
        for(int i=ans.size()-1; i>=0; i--) {
            str+= ans[i];
            if(i!=0) str+= ' ';
        }
        return str;
    }
};