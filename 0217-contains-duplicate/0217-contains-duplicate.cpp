class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> hash_mpp;
        for(auto i: nums) {
            if(hash_mpp[i] >= 1) return true;
            else hash_mpp[i]++;
        }
        return false;
    }
};