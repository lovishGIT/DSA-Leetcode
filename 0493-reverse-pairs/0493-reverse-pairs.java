// https://leetcode.com/problems/reverse-pairs/solutions/6231797/merge-sort-java-solution-using-arraylist-6stg
class Solution {
    private int merge(int[] arr, int left, int pivot, int right) {
        int st = left;
        int mid = pivot;

        // counting
        int count = 0;
        while(st < pivot) {
            long prod = 0;
            if(mid <= right) prod = 2 * (long)(arr[mid]);
            if(mid <= right && arr[st] > prod) {
                mid++;
            } else {
                count += mid - pivot;
                st++;
            }
        }

        // sort into diff array 
        st = left;
        mid = pivot;
        ArrayList<Integer> store = new ArrayList<>();
        while(st < pivot && mid <= right) {
            if(arr[st] <= arr[mid]) store.add(arr[st++]);
            else store.add(arr[mid++]);
        }
        while(st < pivot) store.add(arr[st++]);
        while(mid <= right) store.add(arr[mid++]);

        // assignning
        st = left;
        for(int i: store) arr[st++] = i;
        return count;
    }
    private int doSort(int[] nums, int st, int ed) {
        if(st==ed) return 0;
        int mid = (st + ed) / 2;
        int count = 0;
        count += doSort(nums, st, mid);
        count += doSort(nums, mid+1, ed);
        count += merge(nums, st, mid+1, ed);
        return count;
    }
    public int reversePairs(int[] nums) {
        return doSort(nums, 0, nums.length - 1);
    }
}
