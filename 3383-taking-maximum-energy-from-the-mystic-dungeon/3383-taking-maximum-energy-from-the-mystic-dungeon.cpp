class Solution {
public:

    int find(int ind,int k,vector<int>&dp,vector<int>&energy){
        if(ind>=energy.size()){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        return dp[ind]=energy[ind]+find(ind+k,k,dp,energy);
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        
        int maxi=INT_MIN;
        vector<int>dp(n+1,-1);
        for(int i=0;i<n;i++){
           maxi=max(maxi,find(i,k,dp,energy));
        }
        return maxi;
    }
};