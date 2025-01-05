class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int, int> hash_arr;
        for(int i=0; i<nums.size(); i++) {
            if(hash_arr[nums[i]] != 0) {
                if(abs(i - hash_arr[nums[i]] + 1) <= k) return true;
            }
            hash_arr[nums[i]]= i+1;
        }
        return false;
    }
};