class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        if(indexDifference>=nums.size()) return {-1, -1};
        for(int i=0; i<nums.size()-indexDifference; i++) {
            for(int j=i+indexDifference; j<nums.size(); j++) {
                if( abs(nums[i]-nums[j])>=valueDifference ) {
                    // cout<< i << " " << j;
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};