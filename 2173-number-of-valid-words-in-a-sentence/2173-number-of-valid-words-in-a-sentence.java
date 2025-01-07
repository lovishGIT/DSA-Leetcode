class Solution {
    public boolean isNotChar(char ch) {
        if(ch-'a'>=0  && ch-'a'<=26) return false;
        return true;
    }
    public int countValidWords(String sentence) {
        String[] sb = sentence.trim().split("\\s+");
        int invalids = 0;
        for(int i=0; i<sb.length; i++) {
            boolean hyphen= false;
            boolean punc= false;
            for(int j=0; j<sb[i].length(); j++) {
                char ch = sb[i].charAt(j);
                if(ch-'0'>=0 && ch-'0'<=9) {
                    System.out.println("digit");
                    invalids++;
                    break;
                } 
                else if(ch=='-') {
                    boolean surr = hyphen == true || j==0 || j==sb[i].length()-1 || isNotChar(sb[i].charAt(j-1)) || isNotChar(sb[i].charAt(j+1));
                    if(surr) {
                        System.out.println("-");
                        invalids++;
                        break;
                    }
                    else hyphen= true;
                }
                else if(ch=='!' || ch=='.' || ch==',') {
                    if(punc == true || j!=sb[i].length()-1) {
                        System.out.println("punc");
                        invalids++;
                        break;
                    } else {
                        punc = true;
                    }
                }
            }
        }
        return sb.length-invalids;

    }
}