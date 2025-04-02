class Solution {
    void backtrack(int ind, int target, int &k, vector<vector<int>>& res, vector<int>& ds,int range) {
        if(ds.size()==k){
            if (target == 0) {
            res.push_back(ds);
            return;
        }

        }
      

        for (int i = ind; i < range; i++) {
           if(i<=target){
            ds.push_back(i);
            backtrack(i + 1, target -i,k, res, ds,range);
            ds.pop_back();

           }
         
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>res;
        backtrack(1,n,k,res,ds,10);
        return res;
    }
};