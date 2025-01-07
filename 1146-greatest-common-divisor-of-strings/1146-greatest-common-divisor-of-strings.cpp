class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string temp;
        int i= 0;
        if(str1==str2) return str1;
        if(str1.size() < str2.size()) {
            return gcdOfStrings(str2, str1);
        }
        int x= 0;
        temp= "";
        while(i < str1.size()) { 
            if(str1[i] != str2[i % str2.size()]) {
                return "";
            }
            if(i==0) {
                i++;
                continue;
            } // Solving dividing by 0 error in next line.
            if(str1.size()%i==0 && str2.size()%i==0) {
                while(x<i) {
                    temp+= str1[x];
                    x++;
                }
            }
            i++;
        }
        // str2 is just made of our temp
        i=0;
        while(i<str2.size()) {
            if(str2[i] != temp[i % temp.size()]) return "";
            i++;
        }
        return temp;
    }
};