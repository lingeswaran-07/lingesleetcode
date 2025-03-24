class Solution {
    void combi(vector<int>&com,vector<vector<int>>&ans,int st,int &n,int &k){
               if(com.size()==k){
                    ans.push_back(com);
                
               }

               for(int i=st;i<=n;i++){
                com.push_back(i);
                combi(com,ans,i+1,n,k);
                com.pop_back();
               }
               return;
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>com;
        vector<vector<int>>ans;
        combi(com,ans,1,n,k);
        return ans; 
    }
};