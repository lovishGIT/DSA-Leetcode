class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        for(int i = n; i < m+n; i++) {
            nums1[i] = nums2[i-n];
            // cout<< i << " - " << i-n << endl;
        }

        sort(nums1.begin(), nums1.end());
    }
};