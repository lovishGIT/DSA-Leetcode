class Solution {
public:
    int hammingWeight(int n) {
        int ans= 0; 
        while(n>1) {
            if(n%2==1) {
                ans++;
            }
            n= n/2;
        } 
        if(n==1) {
            ans++;
        }
        return ans;
    }
};