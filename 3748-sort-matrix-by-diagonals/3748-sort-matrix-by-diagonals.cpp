class Solution {

private:
      void sortd(vector<vector<int>>& mat,int row,int col,int &m,int &n) {
            vector<int>dia;
            int r=row;
            int c=col;
            while(r<m && c<n){
                dia.push_back(mat[r][c]);
                r++;
                c++;
            }
           sort(dia.begin(),dia.end());
            r=row;
            c=col;
            int i=0;
            while(r<m && c<n){
                mat[r][c]=dia[i++];
                r++;
                c++;
            }

            
      }
private:
        void sortde(vector<vector<int>>& mat,int row,int col,int &m,int &n) {
            vector<int>dia;
            int r=row;
            int c=col;
            while(r<m && c<n){
                dia.push_back(mat[r][c]);
                r++;
                c++;
            }
           sort(dia.rbegin(),dia.rend());
            r=row;
            c=col;
            int i=0;
            while(r<m && c<n){
                mat[r][c]=dia[i++];
                r++;
                c++;
            }

            
      }
    
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
         int m=mat.size();
        int n=mat[0].size();

        for(int c=1;c<n;c++){
            sortd(mat,0,c,m,n);
        }

        for(int r=0;r<m;r++){
            sortde(mat,r,0,m,n);
        }

     return mat;
    }
};