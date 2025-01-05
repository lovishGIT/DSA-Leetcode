class Solution {
    public boolean isPalindrome(int n) {
        int temp= n;
        int ans= 0;

        while(temp > 0) {
            ans = ans * 10 + (temp%10);
            temp = temp / 10;
        }

        if(ans==n) return true;
        else return false;
    }
}