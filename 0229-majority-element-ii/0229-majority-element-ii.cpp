class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i: nums) {
            mpp[i]++;
        }

        vector<int> ans;
        for(auto i: mpp) {
            if(i.second > nums.size()/3) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};