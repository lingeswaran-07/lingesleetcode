class Solution {
public:
    int smallestNumber(int n) {
        for(int i=1;i<=n*n;i=(i*2+1)){
            if(i>=n){
                return i;
            }
        }
        return 0;
    }
};