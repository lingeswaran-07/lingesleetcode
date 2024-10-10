class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end())-k;
        int mini=*min_element(nums.begin(),nums.end())+k;
       int ans=maxi-mini;
       if(ans>0){
        return ans;
       }
       else{
        return 0;
       }
        
    }
};