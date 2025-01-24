class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first = 0;
        int last  = nums.size() - 1;

        while(first <= last) {
            // cout << first << " " << last << endl;
            int mid = first + (last - first) / 2;

            if(nums[mid] == target) return mid;

            if(nums[first] <= nums[mid] && nums[mid] <= nums[last]) {
                if(nums[mid] < target) first = mid + 1;
                else last = mid - 1;
            } else if(nums[first] <= nums[mid]) {
                if(nums[first] <= target && target < nums[mid]) last = mid - 1;
                else first = mid + 1;
            } else {
                if(nums[mid] < target && target <= nums[last]) first = mid + 1;
                else last = mid - 1;
            }
        }
        // cout << first << " " << last << endl;
        return -1;
    }
};