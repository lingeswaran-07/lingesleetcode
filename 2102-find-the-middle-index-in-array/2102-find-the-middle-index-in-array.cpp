class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int tot=accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        for(int i=0;i<n;i++){
            if(leftsum==tot-leftsum-nums[i]){
                return i;
            }
            leftsum+=nums[i];

        }
        return -1;
        
    }
};