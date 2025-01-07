// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         int clearS= 0;
//         int clearT= 0;

//         int i= s.length()-1;
//         int j= t.length()-1;

//         while ( i>=0 && j>=0 ) {

//             if(s[i] == '#') {
//                 clearS++;
//                 i--;
//                 continue;
//             }

//             if(t[j] == '#') {
//                 clearT++;
//                 j--;
//                 continue;
//             }

//             if(clearS > 0) {
//                 i--;
//                 clearS--;
//                 continue;
//             }
//             if(clearT > 0) {
//                 j--;
//                 clearT--;
//                 continue;
//             }

//             // cout<< s[i] << " " << t[j] <<endl;
//             if(s[i]!=t[j]) {
//                 return false;
//             }
//             else {
//                 i--;
//                 j--;
//             }
//         }

//         // cout << i << "," << j <<endl;

//         // s condition
        
//         while(i>=0) {
//             if(s[i] == '#') {
//                 clearS++;
//                 i--;
                
//                 continue;
//             }
//             if(clearS > 0) {
//                 i--;
//                 clearS--;
//                 continue;
//             }
//             // cout << i << "," << j <<endl;
//             return false;
//         }

//         // t condition
//         while(j>=0) {
//             if(t[j] == '#') {
//                 clearT++;
//                 j--;
//                 continue;
//             }
//             if(clearT > 0) {
//                 j--;
//                 clearT--;
//                 continue;
//             }
//             return false;
//         }
//         // j-=clearT;
//         // cout << i << "," << j <<endl;

//         if(i!=j) return false;

//         return true;

//     }
// };

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,  s2;
        for(int i=0; i<s.length(); i++) {
            if(s[i]!='#') s1.push(s[i]);
            else if(!s1.empty()) s1.pop();
        }
        for(int j=0; j<t.length(); j++) {
            if(t[j]!='#') s2.push(t[j]);
            else if(!s2.empty()) s2.pop();
        }

        if(s1.size() != s2.size()) return false;

        while(s1.size()!=0) {
            if(s1.top()!=s2.top()) return false; 
            s1.pop();
            s2.pop();
        }
        return true;
    }
};