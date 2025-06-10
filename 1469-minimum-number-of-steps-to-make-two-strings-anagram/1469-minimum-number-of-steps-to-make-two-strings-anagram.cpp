class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char,int>mp1;
        for(char c:s){
            mp1[c]++;
        }
        int cnt=0;
        for(char c:t){
            if(mp1.find(c)!=mp1.end() && mp1[c]>0){

            mp1[c]--;
            }
            else{
                cnt++;
            }
        }
        
        return cnt;
    }
};