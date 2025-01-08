class Solution {
public:
    void sub(vector<vector<int>>&ans,vector<int>&vec,vector<int>&nums,int ind){
        if(ind==nums.size()){
            ans.push_back(vec);
            return ;
        }
        vec.push_back(nums[ind]);
        sub(ans,vec,nums,ind+1);
        vec.pop_back();
        sub(ans,vec,nums,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>vec;
        sub(ans,vec,nums,0);
        return ans;
   
}
};