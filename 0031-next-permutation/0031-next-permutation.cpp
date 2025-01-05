#include<bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i= nums.size()-1;
        int flagIndex= -1;
        while(i>0) {
            if(nums[i-1] < nums[i]) {
                flagIndex= i-1;
                break;
            }
            i--;
        }
        if(flagIndex==-1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        i= flagIndex + 1;
        while(i<nums.size()-1) {
            if(nums[i+1] > nums[flagIndex]) {
                i++;
                continue;
            }
            break;
        }

        int temp= nums[flagIndex];
        nums[flagIndex]= nums[i];
        nums[i]= temp;

        reverse(nums.begin() + flagIndex + 1, nums.end());
        return;
    }
};