class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int n= nums.size();
        int m= nums[0].size();
        int count= n*m;
        vector<int> new_matrix;
        
        int top=0;
        int left=0;
        int bottom=n-1;
        int right=m-1;

        while(count>0) {
            for(int i= left; i<=right; i++) { // left -> right
                new_matrix.push_back(nums[top][i]); count--;
            } top++;
            
            for(int i= top; i<=bottom; i++) { // top -> bottom
                new_matrix.push_back(nums[i][right]); count--;
            } right--;
            if(count<=0) break;

            for(int i= right; i>=left; i--) { // right -> left
                new_matrix.push_back(nums[bottom][i]); count--;
            } bottom--;
            if(count<=0) break;
            
            for(int i= bottom; i>=top; i--) { // top -> bottom
                new_matrix.push_back(nums[i][left]); count--;
            } left++;
        }

        return new_matrix;
    }
};