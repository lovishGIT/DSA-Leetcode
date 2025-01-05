class Solution {
    public void sortColors(int[] nums) {
        int i0= 0;
        int i2= nums.length-1;

        int i= 0;
        while(i<nums.length && i<=i2) {
            if(nums[i] == 0 && i!= i0) {
                int temp = nums[i0];
                nums[i0] = nums[i];
                nums[i] = temp;
                i0++;
            } else if(nums[i] == 2 && i!=i2) {
                int temp = nums[i2];
                nums[i2] = nums[i];
                nums[i] = temp;
                i2--;
            } else i++;
        }
    }
}