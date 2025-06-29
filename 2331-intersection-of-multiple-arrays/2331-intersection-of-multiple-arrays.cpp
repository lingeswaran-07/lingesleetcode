class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        int m=nums.size();
        int n=nums[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<nums[i].size();j++){
               mp[nums[i][j]]++;
            }
        }

        vector<int>ans;
        for(auto &it:mp){
            if(it.second==m){
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};