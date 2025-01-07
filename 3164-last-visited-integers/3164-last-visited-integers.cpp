class Solution {
public:
    int strTo_int(string s) {
        int x=0;
        int a=0;
        while(s[x] !='\0') {
            a = (a*10) + (s[x]-'0');
            x++;
        }
        return a;        
    }
    vector<int> lastVisitedIntegers(vector<string>& words) {
        
        vector<int> integers;
        vector<int> answer;
        int skip=0;
        
        for(int i=0; i<words.size(); i++) {
            if(words[i]=="prev") {
                int a = integers.size() - 1 - skip;
                if(a < 0) answer.push_back(-1);
                else answer.push_back(integers[a]);
                skip++;
            }
            else {
                integers.push_back(strTo_int(words[i]));
                skip=0;
            } 
        }
        return answer;
    }
};