class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>mp;
        int maxi=-1;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                int a=mp[s[i]];
                int len=(i-a)-1;
                maxi=max(maxi,len);
            }
            else{
            mp[s[i]]=i;
            }
        }
        return maxi;
    }
};