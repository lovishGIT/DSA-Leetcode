class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp; 
        int count= 0;
        for(auto i: nums) {
            mp[i]++;
        }
        for(auto [key, i]: mp) {
            if(i==1) return -1;
            if(i>1) {
                count+= i/3;
                i%=3;
                if(i==1 || i==2) {
                    count++;
                }
                continue;
            }
        }
        return count;
    }
};