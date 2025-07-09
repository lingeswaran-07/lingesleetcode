class Solution {
public:

    int func(vector<int>&t){
        int n=t.size();
        int prev=t[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=t[i];
            if(i>1){
                take+=prev2;
            }
            int ntake=0+prev;
            int cur=max(take,ntake);
            prev2=prev;
            prev=cur;
        }
        return prev;

    }
    int rob(vector<int>& nums) {
        vector<int>t1,t2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) t1.push_back(nums[i]);
            if(i!=nums.size()-1) t2.push_back(nums[i]);
        }
        return max(func(t1),func(t2));
        
    }
};