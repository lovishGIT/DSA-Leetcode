class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int first = 0;
        int last = arr.size() - 1;

        while(first <= last) {
            if(last - first <= 1) return arr[last] > arr[first] ? last : first;
            int mid = first + (last - first) / 2;
            
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            else if(arr[mid] > arr[mid-1]) first = mid + 1;
            else last = mid - 1;
        }

        return -1;
    }
};