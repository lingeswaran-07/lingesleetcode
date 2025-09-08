class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n+m-1;i++){
            vector<int>temp;
            int row=(i<m)?0:i-m+1;
            int col=(i<m)?i:m-1;

            while(row<n && col>=0){
                temp.push_back(mat[row][col]);
                row++;
                col--;
            }

            if(i%2==0){
                reverse(temp.begin(),temp.end());
            }

            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
        }
        return ans;
    }
};