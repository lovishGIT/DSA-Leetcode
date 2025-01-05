class Solution {
public:
    bool validPath(string path) {
        int startBracket= 0;
        for(int i=0; path.size(); i++) {
            if(path[i] == '(') {
                startBracket++;
            } else if(startBracket > 0 && path[i] == ')') {
                startBracket--;
            } else if(startBracket <= 0 && path[i] == ')') {
                return false;
            } else {
                break;
            }
        }
        if(startBracket != 0) {
            return false;
        }
        return true;
    }
    void GetBracket(vector<string> &ans, int n, string path="(") {
        if(path.length() == n+n) {
            if(validPath(path)) {
                ans.push_back(path);
            }
            // cout<< path <<endl;
            return;
        }
        GetBracket(ans, n, path+'(');
        GetBracket(ans, n, path+')');
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        GetBracket(ans, n);
        return ans;
    }
};