class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        int cnt=0;
        while(ans!=0){
            int a=ans%2;
            cnt+=a;
            ans/=2;
        }
        return cnt;
    }
};