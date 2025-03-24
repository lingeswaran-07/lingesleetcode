class Solution {
    void perm(vector<int>&per,vector<vector<int>>&ans,vector<int>&nums,int st ){
        if(st==nums.size()){
                  ans.push_back(nums);
                  return;
        }

        for(int i=st;i<nums.size();i++){
            swap(nums[st],nums[i]);
            perm(per,ans,nums,st+1);
            swap(nums[st],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
       vector<int>per;
       vector<vector<int>>ans;
       perm(per,ans,nums,0);
       return ans;
    }
};