class Solution {
public:
    int getExtra(map<char, int> hasMap) {
        int maxFreq = 0;
        int totalFreq = 0;
        for(auto i: hasMap) {
            totalFreq += i.second;
            maxFreq = max(maxFreq, i.second);
        }

        return totalFreq - maxFreq;
    }
    int characterReplacement(string s, int k) {
        int i = 0, j = 0;
        int maxLen = 0;
        map<char, int> hasMap;

        while(j < s.length()) {
            hasMap[s[j]]++;
            if(getExtra(hasMap) > k) {
                hasMap[s[i]]--;
                if(hasMap[s[i]] == 0) hasMap.erase(s[i]);
                i++;
            }
            if(getExtra(hasMap) <= k) {
                maxLen = max(maxLen, j-i+1);
            }
            j++;
        }

        return maxLen;
    }
};
