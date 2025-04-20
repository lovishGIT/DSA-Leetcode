class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for(char ch: s) {
            if(ch == ' ') {
                if(word.length() > 0) words.push_back(word);
                word = "";
            } else word += ch;
        }

        if(word != "") words.push_back(word);
        
        string result = "";
        for(string word: words) {
            if(result == "") result = word;  
            else result = word + ' ' + result; 
        }

        return result;
    }
};