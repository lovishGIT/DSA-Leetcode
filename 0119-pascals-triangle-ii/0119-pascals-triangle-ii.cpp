class Solution {
public:
    vector<int> getRow(int row) {
        
        if(row == 0) return {1};
        if(row == 1) return {1,1};

        vector<int> answer = {1,2,1};
        for ( int i= 2; i<row ; i++){
            answer.push_back(1);
            for(int j= i; j>=1 ; j--){
                answer[j] = answer[j] + answer[j-1];  
            }
        }
        return answer;
    }
};