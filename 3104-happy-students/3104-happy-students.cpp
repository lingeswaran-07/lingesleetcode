class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int s=0;
        if(nums[0]!=0) ans=1;
        for(int i=0;i<n;i++){
            s++;
            if(s>nums[i]){
            if(i+1<n && s<nums[i+1]){
                ans++;
            }
            else if(i+1==n) ans++;
            }
        }
        return ans;
        
    }
};