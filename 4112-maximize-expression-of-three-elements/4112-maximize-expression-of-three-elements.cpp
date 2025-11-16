class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {  
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int flar=nums[n-1];
        int slar=nums[n-2];
        int small=nums[0];
        int ans=flar+slar-small;
        return ans;
    }
};