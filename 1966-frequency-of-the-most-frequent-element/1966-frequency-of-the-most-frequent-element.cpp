class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int freq= 0;
        int mxFreq= 1;
        int stored_k= k;
        for(int i=n-1; i>=0 ;i--) {
            freq= 1;
            for(int j=i-1;j>=0 ;j--) {
                if(nums[j]==nums[i]) {
                    freq++;
                    i--;
                    // cout<<"here";
                }
                else {
                    break;
                }
            }
            k= stored_k;
            for(int j=i-1;j>=0 ;j--){
                // cout<<"here ";
                if(nums[j]+ k >= nums[i]){
                    k-= nums[i] - nums[j];
                    freq++;
                    // cout<<"*"<<nums[i]<<"-"<<nums[j]<<"*";
                }
                else{
                    break;
                }
            }
            // cout<<endl;

            mxFreq= max(mxFreq, freq);
        }
        return mxFreq;
    }
};