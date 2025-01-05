class Solution {
    public boolean cond(int arr[], int check) {
        if(check >= arr[0] && check <= arr[1]) return true;
        return false;
    }

    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (i1, i2) -> Integer.compare(i1[0], i2[0]));
        int n = intervals.length;
        int count = 0;
        for(int i= 1; i<n; i++) {
            boolean cond1 = cond(intervals[i-1], intervals[i][0]);
            boolean cond2 = cond(intervals[i-1], intervals[i][1]);
            if(cond1 == true || cond2 == true) {
                intervals[i][0] = Math.min(intervals[i-1][0], intervals[i][0]);
                intervals[i][1] = Math.max(intervals[i-1][1], intervals[i][1]);
                intervals[i-1][0] = -1; 
                intervals[i-1][1] = -1; 
                count++;
            }
        }
        int x = 0;
        int arr[][] = new int[n-count][2];
        for(int[] i: intervals) {
            if(i[0]!= -1 && i[1]!=-1) {
                arr[x][0] = i[0];
                arr[x][1] = i[1];
                x++;
            }
        }
        return arr;
    }
}