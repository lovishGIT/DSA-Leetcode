class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums, int ind = 0) {
        if(ind + 1 >= nums.size()) return {nums};
        vector<vector<int>> answers;
        for(int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);
            for(auto i: permute(nums, ind+1)) answers.push_back(i);
            swap(nums[ind], nums[i]);
        }
        return answers;
    }
};