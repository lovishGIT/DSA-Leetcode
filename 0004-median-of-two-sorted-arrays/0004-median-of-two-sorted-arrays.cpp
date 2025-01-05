class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int n= A.size();
        int m= B.size();
        int ind = 0; 
        int x = 0;

        vector<int> ans;
        // merge(A.begin(),A.end(), B.begin(), B.end(), ans.begin());
        // sort(ans.begin(), ans.end());

        while(ind<n || x<m) {
            // cout<< ind << " " << x << endl;
            if(ind<n && (x>=m || A[ind]<B[x])) {
                ans.push_back(A[ind]);
                ind++;
            } else {
                ans.push_back(B[x]);
                x++;
            }
        }

        // for(auto i: ans) {
        //     cout<< i << " ";
        // } cout<< endl;

        int mid = ans.size() / 2;
        if(ans.size() % 2==0) {
            return (ans[mid] + ans[mid-1]) / 2.0;
        } else {
            return ans[mid];
        }
        
    }
};