class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // voyer voting 
        int ele= 0;
        int count= 0;
        for(int i: nums) {
            if(count==0) ele= i;
            if(i==ele) count++;
            else count--;
        }
        return ele;
    }
};