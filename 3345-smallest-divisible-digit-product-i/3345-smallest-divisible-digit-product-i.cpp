class Solution {
public:
    int smallestNumber(int n, int t) {
        int a=n;
        while(a!=0){
            int aa=a;
            int pro=aa%10;
            aa/=10;
           while(aa!=0){
            int d=aa%10;
            pro=(pro*d);
            aa/=10;
           }
        if(pro%t==0){
           return a;
        }
        else{
            a++;
        }
        }
        return t;
    }
};