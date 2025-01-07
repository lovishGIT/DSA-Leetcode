class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        
        if(n != nums[n-1]+1) return false; // this confirms that there is one extra element
        for(int i=0; i<n; i++) {
            if(nums[i] != i+1 && i!= n-1) {
                return false;
            }
        }

        return true;
    }
};