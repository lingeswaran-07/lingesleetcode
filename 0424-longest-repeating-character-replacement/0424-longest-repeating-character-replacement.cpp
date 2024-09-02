class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxfre=0,maxlen=0;
        int hash[26]={0};
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxfre=max(maxfre,hash[s[r]-'A']);
            if(((r-l+1)-maxfre)>k){
                hash[s[l]-'A']--;
                maxfre=0;
                l+=1;
            }
        if(((r-l+1)-maxfre)<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
        }
        return maxlen;
    }
};