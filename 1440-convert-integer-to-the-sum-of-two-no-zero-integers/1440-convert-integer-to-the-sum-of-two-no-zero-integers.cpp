class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int l=1;
        int h=n-1;
        vector<int>vec;
        while(l<=h){
            int a=l;
            int b=h;
            int sum=0;
            int flag=0;
            int flag1=0;
            while(a>0){
                int d=a%10;
                if(d==0){
                 flag=1;
                 break;
                }
                a/=10;
            }
            while(b>0){
                int d=b%10;
                if(d==0){
                    flag1=1;
                 break;
                }
                b/=10;

            }
            if(flag==0 && flag1==0){
               a=l;
               b=h;
               sum=a+b;
            }
            if(sum==n){
                vec.push_back(l);
                vec.push_back(h);
                break;
            }
            l++;
            h--;
        }
        return vec;
        
    }
};