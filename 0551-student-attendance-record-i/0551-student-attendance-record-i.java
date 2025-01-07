class Solution {
    public boolean checkRecord(String s) {
        char ch[] = s.toCharArray();
        int n= ch.length;
        boolean absent= false;
        int leave= 0;

        for(int i=0; i<n; i++) {
            if(ch[i] == 'A') {
                leave= 0;
                if(absent==true) return false;
                absent= true;
            } else if(ch[i] == 'L') {
                leave++;
                if(leave>=3) return false;
            } else leave= 0;
        }

        if(leave == 3) return false;
        return true;
    }
}