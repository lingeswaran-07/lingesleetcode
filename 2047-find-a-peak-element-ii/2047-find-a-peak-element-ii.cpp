class Solution {
public:
    int findmax(vector<vector<int>>& mat,int n,int mid){
        int ans=-1;
        int maxi=-1;
        for(int i=0;i<n;i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
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
            int row=findmax(mat,n,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            if(mat[row][mid]<left){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return {-1,-1};
    }
};