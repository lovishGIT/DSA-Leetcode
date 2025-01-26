class Solution {
public:
    int findMin(vector<int>& nums) {
        int first = 0;
        int last = nums.size() - 1;

        int mini = INT_MAX;

        while(first <= last) {
            int mid = first + (last - first) / 2;
            mini = min(mini, nums[mid]);

            if(nums[first] < nums[mid]) {
                mini = min(mini, nums[first]);
                first = mid + 1;
            } else {
                mini = min(mini, nums[last]);
                last = mid - 1;
            }
        }

        return mini;
    }
};