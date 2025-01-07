// class Solution {
// public:
//     bool check(vector<int> &nums) {
//         int i = 1;
//         while (i<nums.size())  {
//             if (nums[0] != nums[i]) return false;
//             i++;
//         }
//         return true;
//     }
//     void change(vector<int> &nums, int k) {
//         // increment
//         for (int i = 0; i < nums.size() - 1; i++) nums[i] += k;

//         // sort
//         int ele = nums[nums.size() - 1];
//         int i = nums.size() - 2;
//         while (i >= 0 && nums[i] > ele) {
//             nums[i + 1] = nums[i];
//             i--;
//         }
//         nums[i + 1] = ele;
//     }
//     int find_nMax(vector<int> &nums) {
//         int i = nums.size() - 2;
//         while (i >= 0 && nums[i] > nums[nums.size()-1]) i--;
//         return nums.size() - i - 1;
//     }
//     int minMoves(vector<int> &nums) {
//         int n = nums.size();
//         if (n <= 1) return 0;
//         sort(nums.begin(), nums.end());

//         int moves = 0;
//         int nMax = 1;
//         while (!check(nums)) {
//             int temp = (nums[n - 1] - nums[0]) / find_nMax(nums);
//             if (temp == 0) temp = 1;
//             moves += temp;
//             change(nums, temp);
//         }
//         return moves;
//     }
// };

class Solution {
    public: 
        int minMoves(vector<int> &nums) {
            int n= nums.size();
            int mnn= INT_MAX;
            int sum= 0;
            for(int i=0; i<n; i++) {
                mnn= min(mnn, nums[i]);
                sum+= nums[i];
            }
            return sum - (mnn*n);
        }
};