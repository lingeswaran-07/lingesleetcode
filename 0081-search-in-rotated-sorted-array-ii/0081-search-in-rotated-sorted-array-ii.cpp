class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target) return true;
            if(nums[l]==nums[m] && nums[m]==nums[h]){
                l=l+1;
                h=h-1;
                continue;
            }
            if(nums[l]<=nums[m]){
                if(nums[l]<=target && target<=nums[m]){
                    h=m-1;
                } 
                else{
                    l=m+1;
                }
            }
            else{
                  if(nums[h]>=target && nums[m]<=target){
                    l=m+1;
                } 
                else{
                    h=m-1;
                }

            }
        }
        return false;
    }
};