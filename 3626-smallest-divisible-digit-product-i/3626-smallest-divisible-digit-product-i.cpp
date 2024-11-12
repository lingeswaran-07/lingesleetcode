class Solution {
public:
    int smallestNumber(int n, int t) {
        int res;
        for(int i=n;i<=100;i++){
            if(i<10){
            if(i%t==0){
                res=i;
                break;
            }
        }
        if(i>=10){
            int digit=i%10;
            int a=i/10;
            int ans=digit*a;
            if(ans%t==0){
                cout<<i;
                 res=i;
                 break;
          }
        }}
        return res;
    }
};