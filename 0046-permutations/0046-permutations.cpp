class Solution {
public:
    vector<vector<int>> func(vector<int> nums, vector<int> tillNow, int start) {
        if(tillNow.size() == nums.size()) return {tillNow};

        vector<vector<int>> answers;
        vector<int> temp;
        for (auto ele: tillNow) temp.push_back(ele);

        for(int i = start; i < nums.size(); i++) {
            vector<int> temp1 = temp;
            temp1.push_back(nums[i]);
            swap(nums[i], nums[start]);
            for(auto ele: func(nums, temp1, start + 1)) {
                answers.push_back(ele);
            }
            swap(nums[i], nums[start]);
        }
        return answers;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answers;
        answers = func(nums, {}, 0);
        return answers;
    }
};