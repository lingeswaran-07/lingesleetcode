class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n;
        int sum=0;
        int pro=1;
        while(n!=0){
            int d=n%10;
            sum+=d;
            pro*=d;
            n/=10;
        }
        cout<<sum<<endl;
        cout<<pro;
        if(a%(sum+pro)==0){
            return true;
        }
        else{
        return false;
        }
        
    }
};