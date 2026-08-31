class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,sum=0;
        int cnt=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        while(r<n){
            sum+=nums[r];
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
            r++;
        }
        return cnt;
    }
};