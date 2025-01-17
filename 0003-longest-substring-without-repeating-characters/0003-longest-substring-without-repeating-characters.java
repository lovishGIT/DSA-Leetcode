class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Boolean> mpp = new HashMap<>();

        int left = 0;
        int right = 0;

        int result = 0;
        while(right < s.length()) {
            Boolean occur = mpp.getOrDefault(s.charAt(right), false);
            if(!occur) {
                mpp.put(s.charAt(right), true);
            } else {
                mpp.put(s.charAt(left), false);
                left++;
                continue;
            }
            result = Math.max(result, right - left + 1);
            right++;
        }
        return result;
    }
}