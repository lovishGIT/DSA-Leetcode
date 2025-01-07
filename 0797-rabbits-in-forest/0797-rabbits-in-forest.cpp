class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(), answers.end());
        map<int, int> mpp;
        for(int i= 0; i<answers.size(); i++) {
            mpp[answers[i]]++;
        }

        int count = 0;
        for(pair<int,int> i: mpp) {
            int pairsPresent = i.second / (i.first+1);
            int leftOnes = (i.second % (i.first+1)) > 0 ? 1 : 0;
            count+= (pairsPresent + leftOnes) * (i.first + 1);
        }

        return count;
    }
};