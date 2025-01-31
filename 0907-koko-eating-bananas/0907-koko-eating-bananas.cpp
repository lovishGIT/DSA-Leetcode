class Solution {
public:
    long checkTime(vector<int>& piles, int cap) {
        long answer = 0;
        
        for(auto i: piles) {
            answer += (int)(i / cap);
            answer += (i % cap == 0) ? 0 : 1;
        }

        return answer;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mn = 1;
        int mx = 1;

        for(auto i: piles) {
            mx = max(mx, i);
        }

        while(mn <= mx) {
            int mid = mn + (mx - mn) / 2;

            if(checkTime(piles, mid) > (long) h) {
                mn = mid + 1;
            } else {
                mx = mid - 1;
            }
        }

        return mn;
    }
};