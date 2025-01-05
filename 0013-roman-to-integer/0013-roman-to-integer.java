class Solution {
    public int give_value(char ch) {
        switch(ch) {
            case 'I': return 1;
            case 'V': return 5; 
            case 'X': return 10; 
            case 'L': return 50; 
            case 'C': return 100; 
            case 'D': return 500; 
            case 'M': return 1000; 
        }
        return 0;
    }
    public int romanToInt(String s) {
        int ans= 0;
        int i=0;
        while(i<s.length()) {
            int val1 = give_value(s.charAt(i));
            int val2= (i+1 < s.length()) ? give_value(s.charAt(i+1)) : -1;
            if(val2 > val1) {
                ans+= val2-val1;
                i++;  
            } else ans+= val1;
            i++;
        }
        return ans;
    }
}