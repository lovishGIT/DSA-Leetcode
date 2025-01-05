class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();

            for(int i= n-1;i>-1;i--) {
                if(digits[i]!=9){
                    digits[i]+=1;
                    break;
                }
                else {
                    digits[i] = 0;
                    if(i==0) {
                        digits.insert(digits.begin(),1);
                        break;
                    }
                    continue;
                }
            }
        return digits;
    }
};