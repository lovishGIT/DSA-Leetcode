class Solution {
    public int findMiddleIndex(int[] nums) {
        int sum = 0;
        for(int i: nums) sum += i;

        int lSum = 0;
        for(int i= 0; i < nums.length; i++) {
            sum -= nums[i];
            if(sum == lSum) return i;
            lSum += nums[i];
        }
        return -1;
    }
}