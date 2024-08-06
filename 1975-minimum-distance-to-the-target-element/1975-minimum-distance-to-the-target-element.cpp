class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int res=0;
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                   res=abs(i-start);
                   if(res<maxi){
                    maxi=res;
                   }
            }
        }

        return maxi;

        
    }
};