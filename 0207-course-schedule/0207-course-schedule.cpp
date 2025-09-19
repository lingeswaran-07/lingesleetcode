class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<n;i++){
             int u = prerequisites[i][0];
             int v = prerequisites[i][1];
             adj[u].push_back(v);
        }

        vector<int>indeg(numCourses);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                 indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indeg[i]==0) q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }

        }
        if(topo.size()==numCourses) return true;
        else return false;


    }
};