class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int zcnt=0;
        int maxi=0;
        while(r<n){
            if(nums[r]==0){
                zcnt++;
            }
            while(zcnt>1){
                if(nums[l]==0){
                    zcnt--;
                }
                l++;
            }
            maxi=max(maxi,r-l);
            r++;
        }
        return maxi;
        
    }
};