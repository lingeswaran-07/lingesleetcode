class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1){
            return 1;
        }
        int osum=0;
        int esum=0;
        int ocnt=0,ecnt=0;
        for(int i=1;i<n*n;i++){
            if(ocnt==n && ecnt==n){
                break;
            }
            if(i%2==1 && ocnt<n){
                ocnt++;
                osum+=i;
            }
            else if(i%2==0 && ecnt<n){
                ecnt++;
                esum+=i;
            }

        }
        return __gcd(osum,esum);
    }
};