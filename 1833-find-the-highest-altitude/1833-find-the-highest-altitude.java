class Solution {
    public int largestAltitude(int[] gain) {
        int sum = 0;
        int maxi = 0;

        for(int i : gain) {
            sum += i;
            maxi = Math.max(maxi, sum);
        }

        return maxi;
    }
}