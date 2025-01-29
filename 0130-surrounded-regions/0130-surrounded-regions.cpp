class Solution {
     void dfs(vector<vector<char>>& board,int i,int j){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!='O'){
            return;
        }
        board[i][j]='s';
        dfs(board,i+1,j);
        dfs(board,i-1,j);
        dfs(board,i,j+1);
        dfs(board,i,j-1);
    }
public:
    
   
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i==0 || i==r-1 || j==0 || j==c-1) && board[i][j]=='O' ){
                    dfs(board,i,j);
                }
            }
        }
       
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if( board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='s'){
                    board[i][j]='O';
                }
            }

        }
        
    }
};