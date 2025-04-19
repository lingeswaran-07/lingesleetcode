class Solution {
public:
unordered_map<int,int>mp;
    int climbStairs(int n) {
       
       if(n==1) return 1;
       if(n==2) return 2;
       if(mp.find(n)!=mp.end()){
        return mp[n];
       }
       int step1=climbStairs(n-1);
       int step2=climbStairs(n-2);
       int res=step1+step2;
       mp[n]=res;
       return res;
         
           }
};