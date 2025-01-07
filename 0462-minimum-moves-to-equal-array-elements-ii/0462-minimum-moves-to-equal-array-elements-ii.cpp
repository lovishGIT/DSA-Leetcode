class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());

        int mid = n/2;
        int avg = (n%2==0) ? nums[mid] : (nums[mid] + nums[mid+1]) / 2;
        int moves = 0;
        for(int i=0; i<=n; i++) moves+= abs(avg - nums[i]);
        return moves;
    }
};