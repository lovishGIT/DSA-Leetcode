class Solution {
public:
    int countDays(vector<int>& weights, int capacity) {
        int days = 0;
        int hasWeight = 0;
        for(auto i: weights) {
            hasWeight += i;
            if(hasWeight > capacity) {
                hasWeight = i;
                days++;
            } 
            if(hasWeight == capacity) {
                hasWeight = 0;
                days++;
            }
        }
        if(hasWeight > 0) days++;
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = 0;
        int right = 0;
        for(auto i: weights) {
            right+= i;
            left = max(left, i);
        }

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(countDays(weights, mid) <= days) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};