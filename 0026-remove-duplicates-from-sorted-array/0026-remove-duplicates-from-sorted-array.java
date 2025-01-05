class Solution {
    public int removeDuplicates(int[] nums) {
        int vis = nums[0];
        int i = 1;
        int j = 1;
        while(i < nums.length) {
            while(j < nums.length && nums[j] <= vis) j++;
            if(j>=nums.length) break;

            nums[i] = nums[j];
            vis= nums[i];
            j++; i++;
        }
        return i;
    }
}