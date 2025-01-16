class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> st;
        long long answer = 0;
        long long sum = 0;
        int i = 0;
        int j = 0;
        while(i < nums.size()) {

            if(!st.contains(nums[i])) {
                if(st.size() == k) {
                    sum -= nums[j];
                    st.erase(nums[j]);
                    j++;
                }
                sum += nums[i];
                st.insert(nums[i]);
                i++;
            } else {
                sum -= nums[j];
                st.erase(nums[j]);
                j++;
            }
            if(st.size() == k) {
                answer = max(answer, sum);
            }
        }

        return answer;
    }
};