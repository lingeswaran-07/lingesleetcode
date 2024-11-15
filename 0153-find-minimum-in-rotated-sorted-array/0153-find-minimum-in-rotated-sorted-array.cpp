class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int ans=INT_MAX;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[l]<=nums[h]){
                ans=min(ans,nums[l]);
                break;
            }

            if(nums[l]<=nums[m]){
                ans=min(ans,nums[l]);
                l=m+1;
            }
            else{
                h=m-1;
                ans=min(ans,nums[m]);
            }
        }
        return ans;
    }
};