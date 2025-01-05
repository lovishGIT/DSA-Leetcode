class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n= nums.size();
        int m= nums[0].size();
        int numsOF00= -1;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(nums[i][j] == 0) {
                    nums[i][0]= 0;
                    if(j==0) numsOF00= 0;
                    else nums[0][j]= 0;
                }
            }
        }

        for(int i=n-1; i>0; i--) {
            for(int j=m-1; j>0; j--) {
                if(nums[i][0]==0 || nums[0][j]==0) nums[i][j]= 0;
            }
        }
        if(nums[0][0]==0) 
            for(int i=m-1; i>=0; i--) nums[0][i]= 0;
        if(numsOF00==0) 
            for(int i=n-1; i>=0; i--) nums[i][0]= 0;   
    }
};