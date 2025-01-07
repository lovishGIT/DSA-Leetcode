class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3= "";
        int minimum = min(word1.size(), word2.size());
        int x= 0;
        while(x < minimum) {
            word3 += word1[x];
            word3 += word2[x];
            // cout<< word3<< endl;
            x++;
        }
        if(minimum == word1.size()) {
            while(x < word2.size()) {
                word3+= word2[x];
                x++;
            }
        } else {
            while(x < word1.size()) {
                word3+= word1[x];
                x++;
            }
        }
        return word3;
    }
};