class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r=0;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
       int maxi=INT_MIN;
       int sum=0;
      
       while(r<n){
          sum+=nums[r];
          if(sum>maxi){
            maxi=sum;
          }
          if(sum<0){
            sum=0;
          }
          r++;
       }
       return maxi;
    }
};