class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        long long a=0;
        long long i=1;
         while(n!=0){
            long long d=n%10;
            if(d!=0){
                if(a==0){
                    ans=d;
                }
                else{
                  ans=(d*a)+ans;
                }
                cout<<ans<<" ";
              a=pow(10,i);
              i++;
              cout<<i<<" ";
            }
            n/=10;
         }
         return ans;
    }
};