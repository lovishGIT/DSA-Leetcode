//  40,41
//  91,93
// 123,125

class Solution {
public:
    bool isValid(string s) {
        while(0==0){

            int n= s.length();
            
            char check;
            bool pair_found = false;
            int index = 0;
            cout<< "here";
            
            for(int i=0;i<n;i++) {
                check = ' ';
                switch(s[i]) {
                    case '(': check = ')'; break;
                    case '{': check = '}'; break;
                    case '[': check = ']'; break;
                }
                if(s[i+1]==check){
                    pair_found = true;
                    index = i;
                    break;
                }
            }
            cout<<s[index];
            
            if(pair_found == true) {
                s.erase(index,2);
                cout<< "here-"<< s <<"-n= "<<s.length()<< endl;
                if(s.length()==0) {
                    // cout<<"no bro true"<<endl;
                    return true;
                }
                else if(s.length()>1){
                    continue;
                }
            }
            return false;
        }
    }
};