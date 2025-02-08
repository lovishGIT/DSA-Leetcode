class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0;
        int right = arr.size() - 1;
        int answer = 0;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            int missTillNow = arr[mid] - 1 - mid;
            
            if(missTillNow < k) left = mid + 1;
            else right = mid - 1;
        }

        if(right == -1) return k;
        return k + 1 + right;
    }
};