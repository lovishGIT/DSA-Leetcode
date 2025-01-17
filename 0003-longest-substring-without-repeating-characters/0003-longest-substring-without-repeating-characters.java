class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> mpp = new HashMap<>();

        int left = 0;
        int right = 0;

        int result = 0;

        while(right < s.length()) {
            int occur = mpp.getOrDefault(s.charAt(right), 0);
            if(occur == 0) {
                mpp.put(s.charAt(right), 1);
            } else {
                while(mpp.getOrDefault(s.charAt(right), 0) != 0) {
                    mpp.put(s.charAt(left), mpp.getOrDefault(s.charAt(left), 0) - 1);
                    left++;
                }
                mpp.put(s.charAt(right), 1);
            }
            result = Math.max(result, right - left + 1);
            right++;
        }
        return result;
    }
}