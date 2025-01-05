class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        set<vector<int>> answer;
        for(int i=0; i<=n-3; i++) {
            if(i!=0 && nums[i] == nums[i-1]) continue;
            int j= i+1;
            int k= n-1;
            while(k>j) {
                // cout<< "here ";
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0) k--;
                else if(sum < 0) j++;
                else {
                    vector<int> x({nums[i], nums[j], nums[k]});
                    answer.insert(x);
                    j++; k--;
                }
            }
        }
        vector<vector<int>> result(answer.begin(), answer.end());
        return result;
    }
};