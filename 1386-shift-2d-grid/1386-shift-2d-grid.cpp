class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>vec;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec.push_back(grid[i][j]);
            }
        }
        
        int nn=vec.size();
        vector<int>v1;
        k=k%nn;
        for(int i=nn-k;i<nn;i++){
            v1.push_back(vec[i]);
        }
        for(int i=0;i<nn-k;i++){
            v1.push_back(vec[i]);
        }
        int val=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            grid[i][j]=v1[val];
            val++;
        }
      }
      return grid;
    }
};