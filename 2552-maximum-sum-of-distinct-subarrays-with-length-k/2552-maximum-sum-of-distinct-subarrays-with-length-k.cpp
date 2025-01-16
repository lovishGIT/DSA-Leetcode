class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> st;
        long long answer = 0;
        long long sum = 0;
        int i = 0;
        int j = 0;
        while(j < nums.size()) {
            if(!st.contains(nums[j])) {
                sum += nums[j];
                st.insert(nums[j]);
                j++;
            } else {
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            if(st.size() == k + 1) {
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            if(st.size() == k) {
                answer = max(answer, sum);
            }
        }

        return answer;
    }
};