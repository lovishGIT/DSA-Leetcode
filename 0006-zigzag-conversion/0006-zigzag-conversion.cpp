class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) {
            return s;
        }
        vector<vector<char>> figure(numRows, vector<char>(s.length(), ' '));
        int x= 0;
        int y=0;
        bool down = false;
        for(int i=0;i<s.length();i++) {
            cout<< x << " "<< y <<endl;
            figure[x][y] = s[i];
            if(down==false && x==numRows-1) { // downward end
                down = true;
            } 
            if(down && x==0) { // upward end
                down = false;
            }
            if(down) { // upward mid
                cout<< "here ";
                x--;
                y++;
            } else { // downward mid
                x++;
            }
        } // made a figure
        string str="";
        for(auto i: figure) {
            for(auto j: i) {
                if(j!=' ') {
                    str+= j;
                }
            }
        }
        return str;
    }
};