class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
            int b=grid[i][j];
              mp[b]++;
           }
        }
        vector<int>ans;
        int sum=0;
        for(auto &it:mp){
            sum+=it.first;
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        int a=(n*m);
        int res=(a*(a+1)/2)-sum;
        if(res>0){
            ans.push_back(res);
        }
        return ans;
        
    }
};