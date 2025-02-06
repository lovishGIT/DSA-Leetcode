class Solution {
public:
    vector<vector<int>> func(vector<int> nums, vector<int> tillNow, vector<int> vis) {
        if(tillNow.size() == nums.size()) return {tillNow};

        vector<vector<int>> answers;
        vector<int> temp;
        for (auto ele: tillNow) temp.push_back(ele);

        for(int i = 0; i < nums.size(); i++) {
            if(vis[i] == 1) continue;

            vector<int> temp1 = temp;
            
            temp1.push_back(nums[i]);
            vis[i] = 1;
            for(auto ele: func(nums, temp1, vis)) {
                answers.push_back(ele);
            }
            vis[i] = 0;
        }
        return answers;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answers;
        vector<int> vis(nums.size(), 0);
        answers = func(nums, {}, vis);
        return answers;
    }
};