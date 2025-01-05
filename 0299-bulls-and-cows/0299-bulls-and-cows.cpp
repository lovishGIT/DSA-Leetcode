class Solution {
public:
    string getHint(string secret, string guess) {
        int arr1[10]= {0};
        string str= "";
        int bulls=0, cows=0;
        for(int i=0; i<secret.size(); i++) {
            if(secret[i] == guess[i]) {
                bulls++;
            } else {
                arr1[secret[i] - '0'] ++;
                str+= guess[i];
            }
        }
        for(int i=0; i<str.size(); i++) {
            if(arr1[str[i] - '0'] != 0) {
                arr1[str[i] - '0'] --;
                cows++;
            } 
        }
        return (to_string(bulls) + 'A' + to_string(cows) + 'B');
    }
};