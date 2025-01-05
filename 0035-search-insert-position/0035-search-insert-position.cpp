class Solution {
public:
    int binSearch(vector<int> &nums, int target, int first, int last) {
        int mid= (first + last) / 2;
        cout<< first <<" "<< mid <<" "<< last <<endl;
        if(nums[mid] == target || (nums[mid] > target && nums[mid-1] < target)) {
            return mid;
        }
        else if(nums[mid] < target && nums[mid+1] > target) {
            return mid+1;
        }
        else if(nums[mid] > target) {
            return binSearch(nums, target, first, mid);
        }
        else {
            return binSearch(nums, target, mid+1, last);
        }
        return 0;
    }
    int searchInsert(vector<int>& nums, int target) {
        int first= 0;
        int last= nums.size()-1;
        if(target > nums[last]) return last+1;
        if(target <= nums[first]) return first;
        return binSearch(nums, target, first, last);
    }
};