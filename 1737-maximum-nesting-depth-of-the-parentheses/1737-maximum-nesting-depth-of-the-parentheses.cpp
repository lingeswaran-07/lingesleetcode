class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int cnt=0;
        int maxcnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' ){
                cnt++;
            }
            else if(s[i]==')'){
                cnt--;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
        
    }
};