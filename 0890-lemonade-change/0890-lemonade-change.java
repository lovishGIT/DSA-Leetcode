class Solution {
    public boolean lemonadeChange(int[] bills) {
        int am05 = 0;
        int am10 = 0;
        int am20 = 0;
        for(int i: bills) {
            System.out.println(am05 + " " + am10 + " " + am20);
            if(i == 5) am05 += 1;
            else if(i == 10) {
                am05 -= 1;
                am10 += 1;
            }
            else if(i == 20) {
                am05 -= 1;
                am10 -= 1;
                am20 += 1;
            }
            if(am10 < 0) {
                am05 -= 2;
                am10 += 1;
            }
            if(am05 < 0) return false; 
            
        }
        return true;
    }
}