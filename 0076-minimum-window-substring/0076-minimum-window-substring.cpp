class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,cnt=0,minlen=1e9;
        int sind=-1;
        int hash[256]={0};
        int n=s.size();
        int m=t.size();
        for(char ch: t){
            hash[ch]++;
        }
        while(r<n){
          
            if(hash[s[r]]>0){
                cnt+=1;
            }
            hash[s[r]]--;
            while(cnt==m){
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    sind=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt-=1;
                l++;
            }
            r++;
        }
        return sind==-1?"":s.substr(sind,minlen);
    }
};