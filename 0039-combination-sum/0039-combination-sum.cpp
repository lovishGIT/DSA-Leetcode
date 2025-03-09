class Solution {
public:
    vector<vector<int>> func(vector<int> candidates, int target, vector<int> taken, int ind) {
        if(target == 0) return {taken};
        if(ind >= candidates.size() || target < 0) return {};

        vector<vector<int>> answers;

        vector<vector<int>> notTake = func(candidates, target, taken, ind+1);
        taken.push_back(candidates[ind]);
        vector<vector<int>> take = func(candidates, target-candidates[ind], taken, ind);

        for(auto i: take) answers.push_back(i);
        for(auto i: notTake) answers.push_back(i);

        return answers;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answers;
        for(auto i: func(candidates, target, {}, 0)) answers.push_back(i);
        return answers;
    }
};