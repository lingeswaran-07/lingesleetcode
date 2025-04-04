class Solution {
    // void perm(vector<int>&per,vector<vector<int>>&ans,vector<int>&nums,int st ){
    //     if(st==nums.size()){
    //               ans.push_back(nums);
    //               return;
    //     }

    //     for(int i=st;i<nums.size();i++){
    //         swap(nums[st],nums[i]);
    //         perm(per,ans,nums,st+1);
    //         swap(nums[st],nums[i]);
    //     }
    // }
public:
    vector<vector<int>> permute(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<vector<int>>res;
      do{
        res.push_back(nums);
      }
      while(next_permutation(nums.begin(),nums.end()));
    
     return res;
    }
};