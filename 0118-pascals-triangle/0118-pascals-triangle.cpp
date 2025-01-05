class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) {
            return {};
        }
        else if(numRows == 1) {
            return {{1}};
        }
        vector<vector<int>> answer = {{1}};
        vector<int> adder;
        for(int i = 2; i<=numRows; i++) {
            adder= {1};
            for(int j=1;j<i-1;j++) {
                adder.push_back(answer[i-2][j-1] + answer[i-2][j]);
            }
            adder.push_back(1);
            answer.push_back(adder);
        }
        return answer;
    }
};