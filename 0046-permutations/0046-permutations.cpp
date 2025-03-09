class Solution {
public:
    vector<vector<int>> func(vector<int> nums, vector<int> tillNow, int ind) {
        if(ind >= nums.size()) return {tillNow};
        vector<vector<int>> answers;
        for(int i = ind; i < nums.size(); i++) {
            vector<int> temp = tillNow;
            temp.push_back(nums[i]);
            // swap first
            int var1 = nums[ind];
            nums[ind] = nums[i];
            nums[i] = var1;
            // recursion
            for(auto i: func(nums, temp, ind+1)) answers.push_back(i);
            // swap back
            int var2 = nums[ind];
            nums[ind] = nums[i];
            nums[i] = var2;
        }
        return answers;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answers;
        for(auto i: func(nums, {}, 0)) answers.push_back(i);
        return answers;
    }
};