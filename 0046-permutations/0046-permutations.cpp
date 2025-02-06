class Solution {
public:
    vector<vector<int>> func(vector<int> nums, vector<int> tillNow) {
        if(tillNow.size() == nums.size()) return {tillNow};

        vector<vector<int>> answers;
        vector<int> temp;
        for (auto ele: tillNow) temp.push_back(ele);

        for(auto i: nums) {
            if(find(tillNow.begin(), tillNow.end(), i) != tillNow.end()) continue;
            vector<int> temp1 = temp;
            temp1.push_back(i);
            for(auto ele: func(nums, temp1)) {
                answers.push_back(ele);
            }
        }
        return answers;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answers;
        answers = func(nums, {});
        return answers;
    }
};