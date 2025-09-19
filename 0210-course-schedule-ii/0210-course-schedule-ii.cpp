class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[u].push_back(v);
        }

        vector<int>ind(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                ind[it]++;
            }
        }

        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(ind[i]==0) q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it]==0) q.push(it);
            }

        }
         if(ans.size()==numCourses){
         reverse(ans.begin(),ans.end());
         return ans;
         }
         else{
            return {};
         }
    
    }
};