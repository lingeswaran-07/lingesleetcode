class Solution {
public:

    bool isin(vector<int>&nums){
         for(int i=1;i<nums.size();i++){
           if(nums[i-1]>=nums[i]) return false;
       }
       return true;
    }

    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int i=1;
        for(int i=1;i<n;i++){
           if (nums[i - 1] >= nums[i]){
            vector<int>prev=nums;
            vector<int>cur=nums;
            prev.erase(prev.begin()+(i-1));
            cur.erase(cur.begin()+i);
            return isin(prev) || isin(cur);
        } 
        }
    return true;
    }
};