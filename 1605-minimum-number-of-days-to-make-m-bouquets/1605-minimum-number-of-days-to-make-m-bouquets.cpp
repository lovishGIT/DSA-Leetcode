class Solution {
public:
    int checkBouqets(vector<int>& bloomDay, int days, int k) {
        int bouqets = 0;
        int count = k;
        for(auto i: bloomDay) {
            if(i <= days) count--;
            else count = k;

            if(count == 0) {
                bouqets++;
                count = k;
            }
        }

        return bouqets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)bloomDay.size() < (long) m * (long)k) return -1; 
        int first = *min_element(bloomDay.begin(), bloomDay.end());
        int last = *max_element(bloomDay.begin(), bloomDay.end());

        while(first <= last) {
            int mid = first + (last - first) / 2;

            if(checkBouqets(bloomDay, mid, k) >= m) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }

        return first;
    }
};