class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int maxi=-1;
        // while(l<r){
        //     if(nums[l]<nums[r]){
        //         int a=nums[r]-nums[l];
        //         maxi=max(maxi,a);
        //     }
        // }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    int a=nums[j]-nums[i];
                    maxi=max(maxi,a);
                }
            }
        }
        return maxi;
    }
};