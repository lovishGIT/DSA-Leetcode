class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> answer(nums.size(), 0);
        int pos=0;int neg= 1;
        int x=0;
        while(x<nums.size()) {
            if(nums[x] >= 0) {
                answer[pos]= nums[x]; 
                pos+=2;
            } else {
                answer[neg]= nums[x];
                neg+=2;
            }
            x++;
        }
        return answer;
    }
};