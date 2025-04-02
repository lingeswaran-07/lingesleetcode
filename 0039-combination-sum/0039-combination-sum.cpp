class Solution {
public:

    void backtrack(int ind ,int target,vector<int>&ans,vector<int>& candidates,vector<vector<int>>&res){
        if(ind==candidates.size()){
              if(target==0){
                res.push_back(ans);
              }
              return;
        }
       if(candidates[ind]<=target){
         ans.push_back(candidates[ind]);
         backtrack(ind,target-candidates[ind],ans,candidates,res);
         ans.pop_back();

       }
        backtrack(ind+1,target,ans,candidates,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           vector<vector<int>>res;
           vector<int>ans;
           backtrack(0,target,ans,candidates,res);
           return res;
    }
};