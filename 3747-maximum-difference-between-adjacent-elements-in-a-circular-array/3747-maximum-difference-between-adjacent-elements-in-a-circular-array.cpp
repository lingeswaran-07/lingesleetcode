class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=1;i<n;i++){
           int sum=abs(nums[i-1]-nums[i]);
           maxi=max(sum,maxi);

        }
        int a=abs(nums[0]-nums[n-1]);
        return max(a,maxi);
    }
};