class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        for(char ch:s){
            mp[ch]++;
        }
        int cnt=-1;
        for(auto&it:mp){
            if(cnt==-1){
                cnt=it.second;
            }
            if(cnt!=it.second) return false;
        }
        return true;
    }
};