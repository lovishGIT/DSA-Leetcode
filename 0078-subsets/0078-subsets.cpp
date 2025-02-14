class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answers = {{}};
        for(int i: nums) {
            vector<vector<int>> tempAns = answers;
            for(vector<int> temp: tempAns) {
                temp.push_back(i);
                answers.push_back(temp);
            }
        }
        return answers;
    }
};