class Solution {
    public boolean checkPalindrome(String word) {
        int i=0;
        int j=word.length()-1;
        while(j>i) {
            if(word.charAt(i) != word.charAt(j)) {
                return false;
            }
            i++; j--;
        }
        return true;
    }
    public String firstPalindrome(String[] words) {
        for(String i: words) {
            if(checkPalindrome(i)) {
                return i;
            }
        }
        return "";
    }
}