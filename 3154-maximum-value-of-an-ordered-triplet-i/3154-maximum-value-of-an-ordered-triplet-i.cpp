class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
       long long ans=0;
       
        for(int i=0;i<n;i++){
             
            for(int j=i;j<n;j++){
                long long sum=0;
                for(int k=j+1;k<n;k++){
                   sum=(long long)(nums[i] - nums[j]) * nums[k] ;
                    if(sum>0){
                         ans=max(ans,sum);
                    }
                }
            }
        }
        return ans;
    }
};