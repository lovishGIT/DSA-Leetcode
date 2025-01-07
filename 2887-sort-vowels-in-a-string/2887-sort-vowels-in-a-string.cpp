class Solution {
public:
    bool isVowel(char ch) {
        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                return true;
                break;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char> vowels;
        for(int i=0; i<s.length(); i++) {
            if(isVowel(s[i])) {
                vowels.push_back(s[i]);
                s[i] = ' ';
            }
        }
        sort(vowels.begin(), vowels.end());
        int i=0;
        for(auto v: vowels) {
            while(s[i]!=' ') i++;
            s[i] = v;
        }
        return s;
    }
};