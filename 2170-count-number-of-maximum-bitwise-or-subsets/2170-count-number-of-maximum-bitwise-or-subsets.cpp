class Solution {
public:
    int back(vector<int>&nums,int maxor,int ind,int cur){
        if(ind ==nums.size()){
            return cur==maxor?1:0;
        }
        if(cur==maxor) return 1<<(nums.size()-ind);
        int include=back(nums,maxor,ind+1,cur|nums[ind]);
        int exclude=back(nums,maxor,ind+1,cur);
        return include+exclude;

    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int maxor=0;
        for(int num:nums){
            maxor|=num;
        }
        return back(nums,maxor,0,0);

        
    }
};