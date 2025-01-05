class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= INT_MAX;
        int profit=0;
        for(auto i: prices) {
            if(i <= min) min= i;
            else profit= max(i-min, profit);
        }
        return profit;
    }
};