class Solution {
public:
    int getThreshold(vector<int>& nums, int div) {
        int threshold = 0;
        for(auto i: nums) {
            threshold += i / div;
            if(i % div != 0) threshold += 1;
        }
        return threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
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