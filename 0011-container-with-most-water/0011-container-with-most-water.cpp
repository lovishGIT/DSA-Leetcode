class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0, j=n-1;
        int volume= 0;
        while(i>=0 && j<=n-1 && i<j) {
            int temp= min(height[i], height[j])*(j-i);
            volume= max(volume, temp);
            if(height[i] > height[j]) {
                j--; continue;
            } else if(height[j] > height[i]) {
                i++; continue;
            } else {
                i++; j--; continue;
            } 
        }
        return volume;
    }
};