class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(n==0) return true;
        
        if(flowerbed.size()==1 && n==1) // handle one element cases
            return (flowerbed[0] == 0) ? true:false;



        for(int i=0; i<flowerbed.size(); i++) {
            if(n<=0) return true;//check

            if(flowerbed[i]==0) {
                count++;
            } else {
                count= 0;
            } // increaser

            if(count==3) { // check if found 3 zeros
                n--;
                count= 1;
            }
            else if( count == 2 && i == flowerbed.size()-1) { // last
                return (n<=1) ? true : false;
            }
            else if( count == 2 && i == 1) { // front
                n--;
                count = 1;
            }
            
        }
        return (n<=0) ? true : false; // how much n is left
    }
};