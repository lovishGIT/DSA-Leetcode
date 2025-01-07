class Solution {
    public int findNumbers(int[] nums) {
        int count=0;
        for(int i=0; i<nums.length; i++) {
            // System.out.print((int)(Math.log10(nums[i]) + 1) + " ");
            if((int)(Math.log10(nums[i])) % 2 == 1) {
                count++;
            }
        }
        return count;
    }
}