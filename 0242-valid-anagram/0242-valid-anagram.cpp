class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int>mp1;
        for(char c:s){
            mp1[c]++;
        }
        for(char c:t){
            if(mp1.find(c)==mp1.end() || mp1[c]==0){
                    return false;
            }
            mp1[c]--;
        }
        for(auto &it:mp1){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};