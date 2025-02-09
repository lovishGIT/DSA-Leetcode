class Solution {
public:
    bool checkIfPlacable(vector<int> position, int balls, int dist) {
        int pos = position[0];
        balls--;
        for(auto i: position) {
            if(i - pos >= dist) {
                balls--;
                pos = i;
            }
            if(balls == 0) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int first = 0;
        int last = position[position.size() - 1];
        while(first <= last) {
            int mid = first + (last - first) / 2;
            if(checkIfPlacable(position, m, mid)) first = mid + 1;
            else last = mid - 1;
        }
        return last;
    }
};