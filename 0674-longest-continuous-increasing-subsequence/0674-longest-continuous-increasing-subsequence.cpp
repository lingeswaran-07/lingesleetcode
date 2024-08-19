class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt=1;
        int maxcnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                cnt++;
                if(maxcnt<cnt){
                maxcnt=cnt;
                }
            }
            else{
                cnt=1;
            }
        }
        return  maxcnt;
        
    }
};