class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        int cnt1=0;
        int cnt2=0;
        int maxi2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
              cnt1++;
            }
            if(s[i]=='L'){
                cnt2++;
                maxi2=max(cnt2,maxi2);
            }
            else{
                maxi2=max(cnt2,maxi2);
                cnt2=0;
            }
        }

        if(cnt1>=2 || maxi2>=3){
            return false;
        }
        else{
            return true;
        }
    }
};