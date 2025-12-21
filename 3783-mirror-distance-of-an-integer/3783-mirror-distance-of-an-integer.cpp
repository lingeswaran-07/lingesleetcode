class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int nn=n;
        while(n!=0){
            int d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        int dif=abs(rev-nn);
        return dif;
        
    }
};