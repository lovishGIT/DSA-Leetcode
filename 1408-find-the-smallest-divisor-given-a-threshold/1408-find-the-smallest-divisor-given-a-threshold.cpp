class Solution {
public:
    int getThreshold(vector<int>& nums, int div) {
        int threshold = 0;
        for(auto i: nums) {
            threshold += (int) ceil((double) i / (double) div);
        }

        return threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(threshold < nums.size()) return -1;

        int first = 1;
        int last = *max_element(nums.begin(), nums.end());

        while(first <= last) {
            int mid = first + (last - first) / 2;
            if(getThreshold(nums, mid) <= threshold) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }

        return first;
    }
};