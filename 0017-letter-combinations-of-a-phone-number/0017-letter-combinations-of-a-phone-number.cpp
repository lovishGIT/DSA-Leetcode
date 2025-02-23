class Solution {
public:
    string get_alphabets(char ch) {
        switch(ch) {
            case '2': return "abc";
            case '3': return "def";
            case '4': return "ghi";
            case '5': return "jkl";
            case '6': return "mno";
            case '7': return "pqrs";
            case '8': return "tuv";
            case '9': return "wxyz";
            default: return "";
        }
    }
    vector<string> configure(vector<string> temp, string chars) {
        vector<string> answers;
        for(auto i: temp) {
            for(auto j: chars) {
                answers.push_back(i + "" + j);
            }
        }
        return answers;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() <= 0) return {};
        vector<string> answers = {""};
        for(auto i: digits) {
            answers = configure(answers, get_alphabets(i));
        }
        return answers;
    }
};