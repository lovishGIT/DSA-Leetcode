class Solution {
    public int findContentChildren(int[] child, int[] cookie) {
        Arrays.sort(child);
        Arrays.sort(cookie);

        int satisfy = 0;
        for(int i = 0; i < cookie.length; i++) {
            if(child[satisfy] <= cookie[i]) {
                satisfy++;
            }
            if(satisfy >= child.length) break;
        }
        return satisfy;
    }
}