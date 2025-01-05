class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
        } 
        multimap<int, char> mpp;
        for(auto i: mp) {
            mpp.insert({i.second, i.first});
        }
        string str= "";
        for(auto i: mpp) {
            for(int x=0; x<i.first; x++) {
                str+= i.second;
            }
        }
        reverse(str.begin(), str.end());
        return str;
    }
};


// aaabbbaaa
// aaaaaabbb || aaabbbaaa 