class Solution {
public:
    int maxelement(vector<vector<int>>& vec,int n,int  m,int mid){
        int ans=-1;
        int max=-1;
        for(int i=0;i<n;i++){
               if(vec[i][mid]>max){
                max=vec[i][mid];
                ans=i;
               }
            }
        
        return ans;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int l=0;
        int h=m-1;
        while(l<=h){
            int mid=(l+h)/2;
            int row=maxelement(mat,n,n,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid]<left){
                h=mid-1;

            }
            else{
                l=mid+1;
            }
        }
        return {-1,-1};
        
    }
};