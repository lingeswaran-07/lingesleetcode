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
        k=k%nn;
        reverse(vec.begin(),vec.end());
        reverse(vec.begin(),vec.begin()+k);
        reverse(vec.begin()+k,vec.end());
        int val=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            grid[i][j]=vec[val];
            val++;
        }
      }
      return grid;
    }
};