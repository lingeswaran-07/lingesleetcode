class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int avg=sum/n;
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=1;
        for(int i=1;i<=maxi+1;i++){
            if(i>avg && (mp.find(i)==mp.end())){
                ans=i;
                break;
            }
        }
        
        return ans;
    }
};