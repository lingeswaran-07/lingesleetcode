class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int l=1;
        int r=n;
        while(l<=r){
            int sum=l+r;
            int a=l;
            int b=r;
            int flag1=1;
            int flag2=1;
            while(a!=0){
                int d=a%10;
                if(d==0){
                    l++;
                    flag1=0;
                    break;
                }
                a/=10;
            }
            while(b!=0){
                int d=b%10;
                if(d==0){
                    flag2=0;
                    r--;
                    break;
                }
                b/=10;
            }
            if(sum==n && (flag1!=0 && flag2!=0)){
                    return {l,r};
            }
            if(sum>=n && flag2==1){
                r--;
            }
            else if(sum<n && flag1==1){
                l++;
            }
        }
        return {-1,-1};
    }
};