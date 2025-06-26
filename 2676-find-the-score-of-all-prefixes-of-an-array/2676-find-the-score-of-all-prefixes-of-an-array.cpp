class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n,0);
        long long maxi=0;
        long long pre=0;
        for(int i=0;i<n;i++){
            maxi=max((long long)nums[i],maxi);
            long long cur=nums[i]+maxi;
             pre+=cur;
             ans[i]=pre;

        }
        return ans;
        
    }
};