class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isprime(n+1,true);
        isprime[0]=false;
        isprime[1]=false;
        int cnt=0;
        if(n<=2){
            return 0;
        }
        for(int i=2;i*i<n;i++){
            if(isprime[i]){
            for(int j=i*i;j<n;j+=i){
            isprime[j]=false;
            }
        }
        }
        for(int i=2;i<n;i++){
            if(isprime[i]){
                cnt++;
            }
        }
        return cnt;
    }
};