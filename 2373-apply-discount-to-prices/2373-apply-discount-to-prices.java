class Solution {
    public String discountPrices(String sentence, int discount) {
        String[] sb = sentence.split(" "); // splitting based on spaces
        for(int i = 0; i < sb.length; i++) {
            if(sb[i].charAt(0) == '$') {
                long number = 0;
                int pointDegree = -1; // seprate number with its floating point
                for(int j = 1; j<sb[i].length(); j++) {
                    char ch = sb[i].charAt(j);
                    if(ch == '.' && pointDegree == 0) pointDegree = 0;
                    else if(ch-'0'>=0 && ch-'9'<=9) {
                        number = (number * 10) + (ch-'0');
                        if(pointDegree>=0) pointDegree++;
                    } 
                    else {
                        pointDegree = -2; break;
                    }
                }
                if(pointDegree >-2 && pointDegree != 0 && number!=0) { // found
                    double answer = number - ((number*discount)/100.0);
                    answer /= Math.pow(10, pointDegree+1);
                    sb[i] = '$' + String.format("%.2f", answer);
                }
            }
        } 
        return String.join(" ", sb);
    }
}