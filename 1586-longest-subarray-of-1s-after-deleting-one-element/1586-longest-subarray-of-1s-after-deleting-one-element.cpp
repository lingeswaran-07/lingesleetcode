class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zcnt=0;
        int maxcnt=0;
        int n=nums.size();
        int l=0,r=0;
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
            maxcnt=max(maxcnt,r-l);
            r++;
        }
        return maxcnt;
        
    }
};