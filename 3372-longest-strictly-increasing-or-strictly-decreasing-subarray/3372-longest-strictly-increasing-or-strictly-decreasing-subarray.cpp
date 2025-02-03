class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int inc=1,dec=1;
        for(int i=1;i<n;i++){
             if(nums[i-1]<nums[i]){
                inc+=1;
                dec=1;
             }
             else if(nums[i-1]>nums[i]){
                inc=1;
                dec+=1;
             }
             else{
                inc=1;
                dec=1;
             }
            int a=max(inc,dec);
            ans=max(a,ans);
        }
        return ans;
        
    }
};