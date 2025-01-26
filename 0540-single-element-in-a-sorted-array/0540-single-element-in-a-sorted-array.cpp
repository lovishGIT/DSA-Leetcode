class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int first = 0; 
        int last = arr.size() - 1;

        while(first <= last) {
            if(last-first < 1) return arr[last]; 
            int mid = first + (last - first) / 2;   

            if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            } else if(arr[mid] == arr[mid+1]) {
                if(mid % 2 == 0) first = mid + 2;
                else last = mid - 1;
            } else {
                if(mid % 2 == 0) last = mid - 2;
                else first = mid + 1;
            }
        }
        return -1;
    }
};