class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int n=nums.size();
       int lsum=0,rsum=0;
       int maxi=0;
       for(int i=0;i<k;i++){
          lsum+=nums[i];
          maxi=lsum;
       }
       int r=n-1;
       for(int i=k-1;i>=0;i--){
        lsum=lsum-nums[i];
        rsum+=nums[r];
        r=r-1;
        maxi=max(maxi,lsum+rsum);
       }
       return maxi;
    }
};