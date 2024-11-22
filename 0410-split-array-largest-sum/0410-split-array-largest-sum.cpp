class Solution {
public:

    int painter(vector<int>&nums,int p){
        int pa=1;
        long long paintr=0;
        for(int i=0;i<nums.size();i++){
            if(paintr+nums[i]<=p){
                paintr+=nums[i];
            }
            else{
                pa++;
                paintr=nums[i];
            }
        }
        return pa;
    }

    int paint(vector<int>&nums,int n,int k){
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int nopaint=painter(nums,mid);
            if(nopaint>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int splitArray(vector<int>& nums, int k) {
        return paint(nums,nums.size(),k);
        
    }
};