class Solution {
    public int low_bound(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        int answer = nums.length;
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] >= target) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }
    public int up_bound(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        int answer = nums.length;
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] <= target) {
                low = mid + 1;
            } else {
                answer = mid;
                high = mid - 1;
            }
        }

        return answer;
    }
    public int[] searchRange(int[] nums, int target) {
        int lb = low_bound(nums, target);
        int ub = up_bound(nums, target);

        // System.out.println(lb + " " + ub);

        int[] answer = new int[2];

        answer[0] = -1;
        answer[1] = -1;
        if(lb >= nums.length || nums[lb] != target) return answer;
        
        answer[0] = lb;
        answer[1] = ub - 1;
        return answer;
    }
}