class Solution {
    public boolean canJump(int[] nums) {
        int i = 0;
        int maxLen = 0;
        while(i <= maxLen) {
            if(i == nums.length-1) return true;
            maxLen = Math.max(maxLen, nums[i] + i);
            System.out.print(maxLen + " ");
            i++;
        }
        return false;
    } 
}