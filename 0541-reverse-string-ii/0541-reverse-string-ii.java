class Solution {
    public char[] reverse(char[] s, int i, int n) { 
        while(i<n) {
            char temp= s[i];
            s[i] = s[n-1];
            s[n-1] = temp;
            n--; i++;
        }
        return s;
    }
    public String reverseStr(String s, int k) {
        char[] ch= s.toCharArray();
        int n= ch.length;
        int i= 0;
        while(i<n) {
            if(n-i <= k) ch= reverse(ch, i, n);
            else ch= reverse(ch, i, i+k);
            i+=2*k;
        }
        return new String(ch);
    }
}