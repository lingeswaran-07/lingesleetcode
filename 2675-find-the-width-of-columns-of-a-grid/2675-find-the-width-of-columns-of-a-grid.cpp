class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>vec(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=grid[i][j];
                int cnt=0;
                if(a<=0){
                    cnt++;
                }
                while(a!=0){
                    int d=a%10;
                    cnt++;
                    a/=10;
                }
                vec[j]=max(vec[j],cnt);
            }
        }
        return vec;
    }
};