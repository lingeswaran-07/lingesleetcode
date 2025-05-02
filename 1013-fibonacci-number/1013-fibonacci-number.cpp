class Solution {
public:
//   int f(int n,vector<int> &dp){
//     if(n<=1){
//             return n;
//         }
//         if(dp[n]!=-1) return dp[n];
        
//       return  dp[n]= f(n-1,dp) +f(n-2,dp);

//   }
 
    int fib(int n) {
       
        // vector<int>dp(n+1,-1);
        // return f(n,dp);
        if(n<=1) return n;
        int prev=1;
        int prev2=0;
        for(int i=2;i<=n;i++){
            int cur=prev+prev2;
            prev2=prev;
            prev=cur;

        }
        return prev;
        
    }
};