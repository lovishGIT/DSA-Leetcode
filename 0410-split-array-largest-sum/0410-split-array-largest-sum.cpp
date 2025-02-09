class Solution {
public:
    int makeParts(vector<int>& nums, int limit) {
        int parts = 0;
        int currSum = 0;
        for(auto i: nums) {
            currSum += i;
            if(currSum > limit) {
                currSum = i;
                parts++;
            } else if(currSum == limit) {
                currSum = 0;
                parts++;
            }
        }

        if(currSum > 0) parts++;
        return parts; 
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        for(auto i: nums) {
            low = max(low, i);
            high += i;
        }

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(makeParts(nums, mid) <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};