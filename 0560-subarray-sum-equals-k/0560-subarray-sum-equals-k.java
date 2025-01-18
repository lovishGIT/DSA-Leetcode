class Solution {
    public int subarraySum(int[] nums, int k) {

        Map<Integer, Integer> mpp = new HashMap<>();
        int sum = 0;
        int count = 0;
        mpp.put(0, 1);
        for(int i : nums) {
            sum += i;
            int hasSum = mpp.getOrDefault(sum - k, 0);
            count+= hasSum;
            mpp.put(sum, mpp.getOrDefault(sum, 0) + 1);
        }
        return count;
    }
}