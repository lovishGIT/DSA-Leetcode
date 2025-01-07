class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int, int> mpp;
        for(auto i: arr) {
            if(mpp[i] != 0) return true;
            mpp[i*2] = 1;
            if(i%2==0) mpp[i/2] = 1;
        }
        return false;
    }
};