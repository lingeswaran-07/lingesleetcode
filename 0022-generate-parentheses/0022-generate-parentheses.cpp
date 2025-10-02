class Solution {
public:
    void dfs(int open,int close,string res,int n,vector<string>&ans){
        if(open==close && open+close==n*2){
            ans.push_back(res);
            return;
        }
        if(open<n){
            dfs(open+1,close,res+"(",n,ans);

        }
        if(close<open){
            dfs(open,close+1,res+")",n,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        dfs(0,0,"",n,ans);
        return ans;
    }
};