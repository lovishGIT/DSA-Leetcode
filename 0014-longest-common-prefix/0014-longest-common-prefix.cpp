class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char check;
        string str1="";
        int stop=-1;

        if(strs.size()==1) {
            return strs[0];
        }

        for(int i=0;i<strs[0].length();i++) {

            check = strs[0][i];
            // cout<<check<<endl;

            for(int j=1;j<strs.size();j++) {

                if( check != strs[j][i])
                {
                    if(i==0) return "";
                    else {
                        stop= i;
                        // cout<<stop<<endl;
                        i+=1000;
                        break;
                    }
                }
            }
        }
        if(stop == -1) return strs[0];
        else {
            for(int k=0;k<stop;k++){
                // cout<<"here"<<endl;
                str1 += strs[0][k];
                }
            return str1;
        }
    }
};  