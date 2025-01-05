class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n= nums.size();

        for(int i=0; i<n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> hasSet;
                for(int k=j+1; k<n; k++) {
                    long long sum = nums[i]+nums[j];
                    sum += nums[k];
                    long long fourth = target-sum;
                    if(hasSet.find(fourth) != hasSet.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                    hasSet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;   
    }
};