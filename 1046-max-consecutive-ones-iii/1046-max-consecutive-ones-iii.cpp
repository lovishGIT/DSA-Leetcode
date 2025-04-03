class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;

        int numberOfZeros = 0;
        int lengthOfLongest = 0;
        while(j < nums.size()) {
            if(nums[j] == 0) {
                numberOfZeros++;
                while(numberOfZeros > k) {
                    numberOfZeros = nums[i] == 0 ? numberOfZeros - 1 : numberOfZeros;
                    i++;
                }
            }
            // cout << j << " - " << i << endl;
            lengthOfLongest = max(lengthOfLongest, j-i+1);
            j++;
        }

        return lengthOfLongest;
    }
};