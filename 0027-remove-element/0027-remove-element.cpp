class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        for(int i= 0; i<nums.size(); i++) {
            if(nums[i] == val) {
                n--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return n;
    }
};