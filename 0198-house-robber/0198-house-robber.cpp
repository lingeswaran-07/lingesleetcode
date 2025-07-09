class Solution {
public:

    int func(int ind,vector<int>&nums,vector<int>&dp){
        if(ind<0) return 0;
        if(dp[ind] !=-1) return dp[ind];
        int pick=nums[ind]+func(ind-2,nums,dp);
        int npick=0+func(ind-1,nums,dp);
        return dp[ind]=max(pick,npick);
    }
    int rob(vector<int>& nums) {
      
        int n=nums.size(); 
        //   vector<int>dp(n+1,-1);
        
        // return func(n-1,nums,dp);
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int t=nums[i];
            if(i>1){
                t+=prev2;
            }
            int nt=0+prev;
            int cur=max(t,nt);
            prev2=prev;
            prev=cur;


        }
        return prev;
    }
};